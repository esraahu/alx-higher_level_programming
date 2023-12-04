#include <stdio.h>
#include <Python.h>
/**
 * print_python_list_info -  function that prints some basic
 *							info about Python lists
 * @p: python list
 */
void print_python_list_info(PyObject *p)
{
	int elemnet;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (elemnet = 0; elemnet < Py_SIZE(p); elemnet++)
		printf("Element %d: %s\n", elemnet, Py_TYPE(PyList_GetItem(p, elemnet))->tp_name);
}
