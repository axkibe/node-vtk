/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkIncrementalForceLayoutWrap.h"
#include "vtkGraphWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkIncrementalForceLayoutWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkIncrementalForceLayoutWrap::ptpl;

VtkIncrementalForceLayoutWrap::VtkIncrementalForceLayoutWrap()
{ }

VtkIncrementalForceLayoutWrap::VtkIncrementalForceLayoutWrap(vtkSmartPointer<vtkIncrementalForceLayout> _native)
{ native = _native; }

VtkIncrementalForceLayoutWrap::~VtkIncrementalForceLayoutWrap()
{ }

void VtkIncrementalForceLayoutWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIncrementalForceLayout").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IncrementalForceLayout").ToLocalChecked(), ConstructorGetter);
}

void VtkIncrementalForceLayoutWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIncrementalForceLayoutWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIncrementalForceLayoutWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGraph", GetGraph);
	Nan::SetPrototypeMethod(tpl, "getGraph", GetGraph);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGraph", SetGraph);
	Nan::SetPrototypeMethod(tpl, "setGraph", SetGraph);

	Nan::SetPrototypeMethod(tpl, "UpdatePositions", UpdatePositions);
	Nan::SetPrototypeMethod(tpl, "updatePositions", UpdatePositions);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkIncrementalForceLayoutWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIncrementalForceLayout> native = vtkSmartPointer<vtkIncrementalForceLayout>::New();
		VtkIncrementalForceLayoutWrap* obj = new VtkIncrementalForceLayoutWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkIncrementalForceLayoutWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalForceLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalForceLayoutWrap>(info.Holder());
	vtkIncrementalForceLayout *native = (vtkIncrementalForceLayout *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIncrementalForceLayoutWrap::GetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalForceLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalForceLayoutWrap>(info.Holder());
	vtkIncrementalForceLayout *native = (vtkIncrementalForceLayout *)wrapper->native.GetPointer();
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraph();
		VtkGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGraphWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalForceLayoutWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalForceLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalForceLayoutWrap>(info.Holder());
	vtkIncrementalForceLayout *native = (vtkIncrementalForceLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkIncrementalForceLayoutWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalForceLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalForceLayoutWrap>(info.Holder());
	vtkIncrementalForceLayout *native = (vtkIncrementalForceLayout *)wrapper->native.GetPointer();
	vtkIncrementalForceLayout * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkIncrementalForceLayoutWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIncrementalForceLayoutWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalForceLayoutWrap *w = new VtkIncrementalForceLayoutWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalForceLayoutWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalForceLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalForceLayoutWrap>(info.Holder());
	vtkIncrementalForceLayout *native = (vtkIncrementalForceLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIncrementalForceLayout * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkIncrementalForceLayoutWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkIncrementalForceLayoutWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIncrementalForceLayoutWrap *w = new VtkIncrementalForceLayoutWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalForceLayoutWrap::SetGraph(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalForceLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalForceLayoutWrap>(info.Holder());
	vtkIncrementalForceLayout *native = (vtkIncrementalForceLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGraphWrap *a0 = ObjectWrap::Unwrap<VtkGraphWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraph(
			(vtkGraph *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalForceLayoutWrap::UpdatePositions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalForceLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalForceLayoutWrap>(info.Holder());
	vtkIncrementalForceLayout *native = (vtkIncrementalForceLayout *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UpdatePositions();
}

