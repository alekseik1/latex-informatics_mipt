// Added module

template<typename DataType>
struct tNode
{
    DataType data;
    tNode* next;
};

template<typename DataType>
struct List{
    tNode<DataType> *begin;
}

template<typename DataType>
void list_init(List<T>);

template<typename DataType>
void list_insert(List<T>, const T &value);

template<typename DataType>
void list_print(List<T>);

template<typename DataType>
void list_destroy(List<T>);

template<typename DataType>
tNode<DataType> * insert_node(tNode<DataType> *p_begin, DataType data);
