/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUniformGridAMRAlgorithmWrap.h"
#include "vtkNonOverlappingAMRAlgorithmWrap.h"
#include "vtkObjectWrap.h"
#include "vtkNonOverlappingAMRWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNonOverlappingAMRAlgorithmWrap::ptpl;

VtkNonOverlappingAMRAlgorithmWrap::VtkNonOverlappingAMRAlgorithmWrap()
{ }

VtkNonOverlappingAMRAlgorithmWrap::VtkNonOverlappingAMRAlgorithmWrap(vtkSmartPointer<vtkNonOverlappingAMRAlgorithm> _native)
{ native = _native; }

VtkNonOverlappingAMRAlgorithmWrap::~VtkNonOverlappingAMRAlgorithmWrap()
{ }

void VtkNonOverlappingAMRAlgorithmWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNonOverlappingAMRAlgorithm").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NonOverlappingAMRAlgorithm").ToLocalChecked(), ConstructorGetter);
}

void VtkNonOverlappingAMRAlgorithmWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNonOverlappingAMRAlgorithmWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUniformGridAMRAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUniformGridAMRAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNonOverlappingAMRAlgorithmWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKNONOVERLAPPINGAMRALGORITHMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKNONOVERLAPPINGAMRALGORITHMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkNonOverlappingAMRAlgorithmWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNonOverlappingAMRAlgorithm> native = vtkSmartPointer<vtkNonOverlappingAMRAlgorithm>::New();
		VtkNonOverlappingAMRAlgorithmWrap* obj = new VtkNonOverlappingAMRAlgorithmWrap(native);
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

void VtkNonOverlappingAMRAlgorithmWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRAlgorithmWrap>(info.Holder());
	vtkNonOverlappingAMRAlgorithm *native = (vtkNonOverlappingAMRAlgorithm *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNonOverlappingAMRAlgorithmWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRAlgorithmWrap>(info.Holder());
	vtkNonOverlappingAMRAlgorithm *native = (vtkNonOverlappingAMRAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkNonOverlappingAMR * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
		VtkNonOverlappingAMRWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNonOverlappingAMRWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNonOverlappingAMRWrap *w = new VtkNonOverlappingAMRWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkNonOverlappingAMR * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkNonOverlappingAMRWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNonOverlappingAMRWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNonOverlappingAMRWrap *w = new VtkNonOverlappingAMRWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNonOverlappingAMRAlgorithmWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRAlgorithmWrap>(info.Holder());
	vtkNonOverlappingAMRAlgorithm *native = (vtkNonOverlappingAMRAlgorithm *)wrapper->native.GetPointer();
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

void VtkNonOverlappingAMRAlgorithmWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRAlgorithmWrap>(info.Holder());
	vtkNonOverlappingAMRAlgorithm *native = (vtkNonOverlappingAMRAlgorithm *)wrapper->native.GetPointer();
	vtkNonOverlappingAMRAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkNonOverlappingAMRAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNonOverlappingAMRAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNonOverlappingAMRAlgorithmWrap *w = new VtkNonOverlappingAMRAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNonOverlappingAMRAlgorithmWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNonOverlappingAMRAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkNonOverlappingAMRAlgorithmWrap>(info.Holder());
	vtkNonOverlappingAMRAlgorithm *native = (vtkNonOverlappingAMRAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNonOverlappingAMRAlgorithm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkNonOverlappingAMRAlgorithmWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNonOverlappingAMRAlgorithmWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNonOverlappingAMRAlgorithmWrap *w = new VtkNonOverlappingAMRAlgorithmWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

