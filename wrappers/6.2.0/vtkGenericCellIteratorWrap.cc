/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGenericCellIteratorWrap.h"
#include "vtkGenericAdaptorCellWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericCellIteratorWrap::ptpl;

VtkGenericCellIteratorWrap::VtkGenericCellIteratorWrap()
{ }

VtkGenericCellIteratorWrap::VtkGenericCellIteratorWrap(vtkSmartPointer<vtkGenericCellIterator> _native)
{ native = _native; }

VtkGenericCellIteratorWrap::~VtkGenericCellIteratorWrap()
{ }

void VtkGenericCellIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericCellIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericCellIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericCellIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericCellIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericCellIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Begin", Begin);
	Nan::SetPrototypeMethod(tpl, "begin", Begin);

	Nan::SetPrototypeMethod(tpl, "GetCell", GetCell);
	Nan::SetPrototypeMethod(tpl, "getCell", GetCell);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsAtEnd", IsAtEnd);
	Nan::SetPrototypeMethod(tpl, "isAtEnd", IsAtEnd);

	Nan::SetPrototypeMethod(tpl, "NewCell", NewCell);
	Nan::SetPrototypeMethod(tpl, "newCell", NewCell);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Next", Next);
	Nan::SetPrototypeMethod(tpl, "next", Next);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkGenericCellIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericCellIteratorWrap::Begin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Begin();
}

void VtkGenericCellIteratorWrap::GetCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAdaptorCellWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAdaptorCellWrap *a0 = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetCell(
			(vtkGenericAdaptorCell *) a0->native.GetPointer()
		);
		return;
	}
	vtkGenericAdaptorCell * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCell();
		VtkGenericAdaptorCellWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericAdaptorCellWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericAdaptorCellWrap *w = new VtkGenericAdaptorCellWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericCellIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericCellIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
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

void VtkGenericCellIteratorWrap::IsAtEnd(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsAtEnd();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericCellIteratorWrap::NewCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
	vtkGenericAdaptorCell * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewCell();
		VtkGenericAdaptorCellWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericAdaptorCellWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericAdaptorCellWrap *w = new VtkGenericAdaptorCellWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericCellIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
	vtkGenericCellIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGenericCellIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericCellIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericCellIteratorWrap *w = new VtkGenericCellIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericCellIteratorWrap::Next(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Next();
}

void VtkGenericCellIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info.Holder());
	vtkGenericCellIterator *native = (vtkGenericCellIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericCellIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGenericCellIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericCellIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericCellIteratorWrap *w = new VtkGenericCellIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

