library(ggplot2)
require(gridExtra)
require(likert)
library(cowplot)

dat <- read.csv("C:/Users/Polaris/Desktop/data_analysis/post.csv")
dat <- na.omit(dat)

#remove string labels from numbers
dat <- data.frame(lapply(dat, function(x){
  gsub("1 - test", "1", x)
}))

#convert factors to same levels
for(i in names(dat)[5:33]){
  levels(dat[[i]])<- c(1, 2, 3, 4, 5, 6, 7)
  dat[[i]]
}

#extract control columns
normalizing.variables <- dat[,c(3,4)]
write.csv(normalizing.variables, "norm_vars.csv", row.names = FALSE)

#split into single, unison, sequence
single <- dat[dat$Condition == 1, ]
unison <- dat[dat$Condition == 2, ]
sequence <- dat[dat$Condition == 3, ]

traits <- c("keepon.looking.object", "keepon.choosing.look", "keepon.reliable", "keepon.group.or.ind", "keepon.aware.env", "Awkward")
#traits <- c("Responsive", "keepon.reliable", "keepon.looking.object", "keepon.choosing.look", "keepon.responding.each.other", "keepon.aware.env", "keepon.group.or.ind", "keepon.look.extended", "keepon.alive.interacting")

#likert plots
plot(likert(single[5:33]), ordered=FALSE) + labs(title= "Single")
plot(likert(unison[5:33]), ordered=FALSE)+ labs(title = "Unison")
plot(likert(sequence[5:33]), ordered=FALSE)+ labs(title = "Sequence")
#plot(likert(unison[which(colnames(single) %in% traits)])) + labs(title = "Unison")
#plot(likert(sequence[which(colnames(single) %in% traits)])) + labs(title = "Sequence")
#plot(likert(single[which(colnames(single) %in% traits)])) + labs(title = "Single")

'
for (t in traits){
  print(t)
  colnum = which(colnames(single)==t)
  plot1 <- ggplot(single, aes(x=single[,colnum]))+geom_bar(fill="blue", alpha = 0.3) + scale_x_discrete(drop=FALSE)+labs(title=paste(t," Single")) +xlab("1= Definitely Not Associated")
  plot2 <- ggplot()+geom_bar(aes(x=unison[,colnum]), fill="red", alpha = 0.5)+ scale_x_discrete(drop=FALSE) + labs(title=paste(t," Unison")) + xlab("7= Definitely Associated")
  plot3 <- ggplot()+geom_bar(aes(x=sequence[,colnum]), fill="red", alpha = 0.5)+ scale_x_discrete(drop=FALSE) + labs(title=paste(t," Sequence")) + xlab("7= Definitely Associated")
  print(plot_grid(plot1, plot2, plot3, ncol=2))
}'

###### STATISTICS: ######

dat <- read.csv("C:/Users/Polaris/Desktop/data_analysis/post.csv")
dat <- na.omit(dat)

#remove string labels from numbers
dat <- data.frame(lapply(dat, function(x){
  gsub("1 - test", "1", x)
}))

#convert factors to numerics
for(i in names(dat)[5:33]){
  dat[[i]]<- as.numeric(levels(dat[[i]]))[dat[[i]]]
  dat[[i]]
}

#split into single, unison, sequence
single <- dat[dat$Condition == 1, ]
unison <- dat[dat$Condition == 2, ]
sequence <- dat[dat$Condition == 3, ]
three <- rbind(unison, sequence)

questions <- c("Question", "ANOVA p value", "ANOVA F value")

for(i in 5:33){
  print(names(dat)[i])
  
  #run anova
  cond <- aov(dat[,i] ~ Condition + dat$Gender, data=dat)
  aov.pval <- summary(cond)[[1]][["Pr(>F)"]][1]
  print(aov.pval)
  
  aov.fval <- summary(cond)[[1]][["F value"]][1]
  
  questions <- rbind(questions, c(names(dat)[i], aov.pval, aov.fval))
}


write.csv(questions, file = "all_p_values.csv")

questions_3 <- c("Question", "ANOVA p value", "ANOVA F value")

for(i in 5:33){
  print(names(dat)[i])
  
  #run anova
  cond <- aov(dat[,i] ~ number.keepons + dat$Gender, data=dat)
  aov.pval <- summary(cond)[[1]][["Pr(>F)"]][1]
  print(aov.pval)
  
  aov.fval <- summary(cond)[[1]][["F value"]][1]
  
  questions_3 <- rbind(questions_3, c(names(dat)[i], aov.pval, aov.fval))
}

write.csv(questions_3, file = "all_p_values_3.csv")

questions_3v2 <- c("Question", "ANOVA p value", "ANOVA F value")

for(i in 5:33){
  print(names(three)[i])
  
  #run anova
  cond <- aov(three[,i] ~ Condition + three$Gender, data=three)
  aov.pval <- summary(cond)[[1]][["Pr(>F)"]][1]
  print(aov.pval)
  
  aov.fval <- summary(cond)[[1]][["F value"]][1]
  
  questions_3v2 <- rbind(questions_3v2, c(names(three)[i], aov.pval, aov.fval))
}

write.csv(questions_3v2, file = "all_p_values_3v2.csv")


#between all three conditions
traits <- c("keepon.looking.object", "keepon.choosing.look", "keepon.reliable", "keepon.group.or.ind", "keepon.aware.env", "Awkward")

#between single and threes
traits3 <- c("keepon.group.or.ind", "Awkward", "keepon.aware.env", "Fair")

#between unison and sequence
traits3v2 <- c("keepon.choosing.look", "Fair", "Honest", "keepon.looking.object", "Scary", "keepon.reliable", "keepon.trustworthy", "Happy", "Capable", "Knowledgeable", "Organic")

bar_graph <- data.frame(Question=character(), Condition=character(), Mean=double(),SE=double())
names(bar_graph) <- c("Question", "condition", "mean", "SE")

bar_graph3 <- data.frame(Question=character(), Condition=character(), Mean=double(),SE=double())
names(bar_graph3) <- c("Question", "number.keepons", "mean", "SE")

bar_graph3v2 <- data.frame(Question=character(), Condition=character(), Mean=double(),SE=double())
names(bar_graph3v2) <- c("Question", "condition", "mean", "SE")

for(t in traits){
  i = which(colnames(single)==t)
  mean.unison <- mean(unison[,i])
  stand_dev.unison <- sd(unison[,i])
  mean.sequence <- mean(sequence[,i])
  stand_dev.sequence <- sd(sequence[,i])
  mean.single <-mean(single[,i])
  stand_dev.single<- sd(single[,i])
  de <- rbind(c(t, "Single", mean.single, stand_dev.single),c(t, "Unison", mean.unison, stand_dev.unison),c(t, "Sequence", mean.sequence, stand_dev.sequence))
  names(de) <- c("Question", "condition", "mean", "SE")
  bar_graph <- rbind(bar_graph,de)
}

#between single and threes
for(t in traits3){
  i = which(colnames(single)==t)
  mean.three <- mean(three[,i])
  stand_dev.three <- sd(three[,i])
  mean.single <-mean(single[,i])
  stand_dev.single<- sd(single[,i])
  de3 <- rbind(c(t, "One", mean.single, stand_dev.single),c(t, "Three", mean.three, stand_dev.three))
  names(de3) <- c("Question", "number.keepons", "mean", "SE")
  bar_graph3 <- rbind(bar_graph3,de3)
}

#between single and threes
for(t in traits){
  i = which(colnames(single)==t)
  mean.unison <- mean(unison[,i])
  stand_dev.unison <- sd(unison[,i])
  mean.sequence <- mean(sequence[,i])
  stand_dev.sequence <- sd(sequence[,i])
  de3v2 <- rbind(c(t, "Unison", mean.unison, stand_dev.unison),c(t, "Sequence", mean.sequence, stand_dev.sequence))
  names(de3v2) <- c("Question", "condition", "mean", "SE")
  bar_graph3v2 <- rbind(bar_graph3v2,de3v2)
}

names(bar_graph) <- c("Question", "condition", "mean", "se")
bar_graph$mean <- as.numeric(as.character(bar_graph$mean))
bar_graph$se <- as.numeric(as.character(bar_graph$se))

names(bar_graph3) <- c("Question", "number.keepons", "mean", "se")
bar_graph3$mean <- as.numeric(as.character(bar_graph3$mean))
bar_graph3$se <- as.numeric(as.character(bar_graph3$se))

names(bar_graph3v2) <- c("Question", "condition", "mean", "se")
bar_graph3v2$mean <- as.numeric(as.character(bar_graph3v2$mean))
bar_graph3v2$se <- as.numeric(as.character(bar_graph3v2$se))

bar_graph$Question <- factor(bar_graph$Question)
ggplot(bar_graph, aes(x=Question, y=mean, fill=condition)) + 
  geom_bar(position=position_dodge(), stat="identity") +
  theme(axis.text.x = element_text(angle = 45, hjust = 1)) +
  geom_errorbar(aes(ymin=mean-se, ymax=mean+se),
                width=.2,                    # Width of the error bars
                position=position_dodge(.9))

write.csv(bar_graph, "bar_graph_data.csv")

bar_graph3$Question <- factor(bar_graph3$Question)
ggplot(bar_graph3, aes(x=Question, y=mean, fill=number.keepons)) + 
  geom_bar(position=position_dodge(), stat="identity") +
  theme(axis.text.x = element_text(angle = 45, hjust = 1)) +
  geom_errorbar(aes(ymin=mean-se, ymax=mean+se),
                width=.2,                    # Width of the error bars
                position=position_dodge(.9))

write.csv(bar_graph3, "bar_graph_data3.csv")


bar_graph3v2$Question <- factor(bar_graph3v2$Question)
ggplot(bar_graph3v2, aes(x=Question, y=mean, fill=condition)) + 
  geom_bar(position=position_dodge(), stat="identity") +
  theme(axis.text.x = element_text(angle = 45, hjust = 1)) +
  geom_errorbar(aes(ymin=mean-se, ymax=mean+se),
                width=.2,                    # Width of the error bars
                position=position_dodge(.9))

write.csv(bar_graph3v2, "bar_graph_data3v2.csv")
