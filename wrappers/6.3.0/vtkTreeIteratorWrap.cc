/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkTreeIteratorWrap.h"
#include "vtkTreeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTreeIteratorWrap::ptpl;

VtkTreeIteratorWrap::VtkTreeIteratorWrap()
{ }

VtkTreeIteratorWrap::VtkTreeIteratorWrap(vtkSmartPointer<vtkTreeIterator> _native)
{ native = _native; }

VtkTreeIteratorWrap::~VtkTreeIteratorWrap()
{ }

void VtkTreeIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTreeIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TreeIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkTreeIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTreeIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTreeIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetTree", GetTree);
	Nan::SetPrototypeMethod(tpl, "getTree", GetTree);

	Nan::SetPrototypeMethod(tpl, "HasNext", HasNext);
	Nan::SetPrototypeMethod(tpl, "hasNext", HasNext);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Restart", Restart);
	Nan::SetPrototypeMethod(tpl, "restart", Restart);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetTree", SetTree);
	Nan::SetPrototypeMethod(tpl, "setTree", SetTree);

	ptpl.Reset( tpl );
}

void VtkTreeIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTreeIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeIteratorWrap>(info.Holder());
	vtkTreeIterator *native = (vtkTreeIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeIteratorWrap::GetTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeIteratorWrap>(info.Holder());
	vtkTreeIterator *native = (vtkTreeIterator *)wrapper->native.GetPointer();
	vtkTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTree();
		VtkTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeIteratorWrap::HasNext(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeIteratorWrap>(info.Holder());
	vtkTreeIterator *native = (vtkTreeIterator *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasNext();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeIteratorWrap>(info.Holder());
	vtkTreeIterator *native = (vtkTreeIterator *)wrapper->native.GetPointer();
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

void VtkTreeIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeIteratorWrap>(info.Holder());
	vtkTreeIterator *native = (vtkTreeIterator *)wrapper->native.GetPointer();
	vtkTreeIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTreeIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeIteratorWrap *w = new VtkTreeIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeIteratorWrap::Restart(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeIteratorWrap>(info.Holder());
	vtkTreeIterator *native = (vtkTreeIterator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Restart();
}

void VtkTreeIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeIteratorWrap>(info.Holder());
	vtkTreeIterator *native = (vtkTreeIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTreeIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTreeIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTreeIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTreeIteratorWrap *w = new VtkTreeIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeIteratorWrap::SetTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkTreeIteratorWrap>(info.Holder());
	vtkTreeIterator *native = (vtkTreeIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTreeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTree(
			(vtkTree *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

