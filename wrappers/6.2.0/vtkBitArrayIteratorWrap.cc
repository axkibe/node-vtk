/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkArrayIteratorWrap.h"
#include "vtkBitArrayIteratorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBitArrayIteratorWrap::ptpl;

VtkBitArrayIteratorWrap::VtkBitArrayIteratorWrap()
{ }

VtkBitArrayIteratorWrap::VtkBitArrayIteratorWrap(vtkSmartPointer<vtkBitArrayIterator> _native)
{ native = _native; }

VtkBitArrayIteratorWrap::~VtkBitArrayIteratorWrap()
{ }

void VtkBitArrayIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBitArrayIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BitArrayIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkBitArrayIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBitArrayIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkArrayIteratorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkArrayIteratorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBitArrayIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetArray", GetArray);
	Nan::SetPrototypeMethod(tpl, "getArray", GetArray);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeSize", GetDataTypeSize);
	Nan::SetPrototypeMethod(tpl, "getDataTypeSize", GetDataTypeSize);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponents", GetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponents", GetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkBitArrayIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBitArrayIterator> native = vtkSmartPointer<vtkBitArrayIterator>::New();
		VtkBitArrayIteratorWrap* obj = new VtkBitArrayIteratorWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBitArrayIteratorWrap::GetArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	vtkAbstractArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArray();
		VtkAbstractArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBitArrayIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBitArrayIteratorWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBitArrayIteratorWrap::GetDataTypeSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBitArrayIteratorWrap::GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBitArrayIteratorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Initialize(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBitArrayIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBitArrayIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	vtkBitArrayIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBitArrayIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBitArrayIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBitArrayIteratorWrap *w = new VtkBitArrayIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBitArrayIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBitArrayIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkBitArrayIteratorWrap>(info.Holder());
	vtkBitArrayIterator *native = (vtkBitArrayIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBitArrayIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBitArrayIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBitArrayIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBitArrayIteratorWrap *w = new VtkBitArrayIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

