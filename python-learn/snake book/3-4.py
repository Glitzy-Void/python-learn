#创建一个列表 作为名单 邀请至少三个嘉宾
list_dinner=['Wang','Guo','Lu']

#循环输出邀请语句
i=0
while (i<3):
    print(list_dinner[i]+',please allow me to invite you to dinner.')
    i=i+1

#有位嘉宾无法赴约 修改名单
print("People who can't come:"+list_dinner[1])
list_dinner[1]='Wei'
print('New people:'+list_dinner[1])
i=0
while(i<3):
    print(list_dinner[i]+',please allow me to invite you to dinner.')
    i=i+1

#找到了更大的餐桌，名单内添加新的嘉宾
print('I can invite more people!')
list_dinner.insert(0,'Yu')
list_dinner.insert(1,'Sun')
list_dinner.append('Xue')

#打印名单
print(list_dinner)

#重新发出邀请
i=0
while(i<6):
    print(list_dinner[i]+',please allow me to invite you to dinner.')
    i=i+1

#出现了变故 发出道歉
print('Only two people can come for dinner.')
i=0
while(i<4):
    print(list_dinner.pop()+",I'm so sorry.")
    i=i+1

#余下人员名单
print('List of dinner:'+str(list_dinner))

#发起邀请
print(list_dinner[0]+','+list_dinner[1]+',please allow me to invite you to dinner.')

#感谢语
print('Nice dining with you.')

#删除名单
del list_dinner[0]
del list_dinner[0]

print(list_dinner)