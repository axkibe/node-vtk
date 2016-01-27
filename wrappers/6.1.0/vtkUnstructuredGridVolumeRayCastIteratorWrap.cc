/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkUnstructuredGridVolumeRayCastIteratorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkUnstructuredGridVolumeRayCastIteratorWrap::ptpl;

VtkUnstructuredGridVolumeRayCastIteratorWrap::VtkUnstructuredGridVolumeRayCastIteratorWrap()
{ }

VtkUnstructuredGridVolumeRayCastIteratorWrap::VtkUnstructuredGridVolumeRayCastIteratorWrap(vtkSmartPointer<vtkUnstructuredGridVolumeRayCastIterator> _native)
{ native = _native; }

VtkUnstructuredGridVolumeRayCastIteratorWrap::~VtkUnstructuredGridVolumeRayCastIteratorWrap()
{ }

void VtkUnstructuredGridVolumeRayCastIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkUnstructuredGridVolumeRayCastIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("UnstructuredGridVolumeRayCastIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkUnstructuredGridVolumeRayCastIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	ptpl.Reset( tpl );
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkUnstructuredGridVolumeRayCastIteratorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Initialize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
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

void VtkUnstructuredGridVolumeRayCastIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	vtkUnstructuredGridVolumeRayCastIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkUnstructuredGridVolumeRayCastIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridVolumeRayCastIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridVolumeRayCastIteratorWrap *w = new VtkUnstructuredGridVolumeRayCastIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnstructuredGridVolumeRayCastIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkUnstructuredGridVolumeRayCastIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridVolumeRayCastIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridVolumeRayCastIteratorWrap *w = new VtkUnstructuredGridVolumeRayCastIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridVolumeRayCastIteratorWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridVolumeRayCastIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridVolumeRayCastIteratorWrap>(info.Holder());
	vtkUnstructuredGridVolumeRayCastIterator *native = (vtkUnstructuredGridVolumeRayCastIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBounds(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

