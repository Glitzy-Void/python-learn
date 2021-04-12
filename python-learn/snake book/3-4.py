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
