#include<stdio.h>
#include<conio.h>

struct emp
{
   int empId;
   char name;
   struct emp *leftChild;
   struct emp *rightChild;
}*root=NULL;


struct emp* insert(struct emp *root, int empId, char name)
{
   if(root == NULL)
    {
      struct emp *newNode=(struct emp *)malloc(sizeof(struct emp));
      newNode->empId = empId;
      newNode->name = name;
      newNode->leftChild = NULL;
      newNode->rightChild = NULL;
      return newNode;
    }
   else if(empId< root->empId)
    {
        root->leftChild = insert(root->leftChild,empId,name);
    }
   else
    {
        root->rightChild = insert(root->rightChild,empId,name);
    }
//original root
return root;    
}


void printPreorder(struct emp* emp)
{
      if(emp== NULL)
          return;
      else
      {
         printf("%d\t",emp->empId);
         printf("%c\t",emp->name);
        // first recur on left subtree
        printPreorder(emp->leftChild);
         // then recur on right subtree
        printPreorder(emp->rightChild);
      }
}

void printInorder(struct emp* emp)
{
      if(emp== NULL)
          return;
      else
      {
        // first recur on left subtree
        printInorder(emp->leftChild);
        printf("%d\t",emp->empId);
        printf("%c\t",emp->name);
         // then recur on right subtree
        printInorder(emp->rightChild);
      }
}

void printPostorder(struct emp* emp)
{
      if(emp== NULL)
          return;
      else
      {
        // first recur on left subtree
        printPostorder(emp->leftChild);
        printf("%c\t",emp->name);
        // then recur on right subtree
        printPostorder(emp->rightChild);
        printf("%d\t",emp->empId);
      }
}




int main()
{
    int c=0,value;
    char name[20];
    while(c!=7)
    {
        printf("\nEnter 1 for Insertion");
        printf("\nEnter 2 for Deletion");
        printf("\nEnter 3 for Searching");
        printf("\nEnter 4 for Postorder");
        printf("\nEnter 5 for Preorder");
        printf("\nEnter 6 for Inorder");
        printf("\nEnter 7 for Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                printf("\nEnter name: ");
                scanf("%c",&name);
                printf("\nEnter emp Id: ");
                scanf("%d",&value);
                root = insert(root,value,name);
                break;
            }
            case 2:
            {
                printf("\nEnter empId to delete: ");
                scanf("%d",&value);
            //    delete(value);
                break;
            }
            case 3:
            {
                printf("\nEnter empId to search: ");
                scanf("%d",&value);
                //search(value);
                break;
            }
            case 4:
            {
                printPostorder(root);
                break;
            }
            case 5:
            {
                printPreorder(root);
                break;
            }
            case 6:
            {
                printInorder(root);
                break;
            }
            case 7:
            {
                break;
            }
            default:
            {
                printf("\nInvalid Choice");
                break;
            }
        }
    }

    return 0;
}