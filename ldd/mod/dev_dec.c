struct dev_opr dev_value ={
.open = dev_open,
.read=dev_read,
.write=dev_write,
};


void dev_open()
{
prinf("device is open successfully");
}

int dev_read()
{
int k;
printf("reading the data from memory");

scanf(" %d", &k);
return k;

}


int dev_write(int i)
{

printf("%d", i);

return 0;
}
