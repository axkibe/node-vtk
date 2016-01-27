/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageEuclideanToPolarWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageEuclideanToPolarWrap::ptpl;

VtkImageEuclideanToPolarWrap::VtkImageEuclideanToPolarWrap()
{ }

VtkImageEuclideanToPolarWrap::VtkImageEuclideanToPolarWrap(vtkSmartPointer<vtkImageEuclideanToPolar> _native)
{ native = _native; }

VtkImageEuclideanToPolarWrap::~VtkImageEuclideanToPolarWrap()
{ }

void VtkImageEuclideanToPolarWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageEuclideanToPolar").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageEuclideanToPolar").ToLocalChecked(), ConstructorGetter);
}

void VtkImageEuclideanToPolarWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageEuclideanToPolarWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageEuclideanToPolarWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetThetaMaximum", GetThetaMaximum);
	Nan::SetPrototypeMethod(tpl, "getThetaMaximum", GetThetaMaximum);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetThetaMaximum", SetThetaMaximum);
	Nan::SetPrototypeMethod(tpl, "setThetaMaximum", SetThetaMaximum);

	ptpl.Reset( tpl );
}

void VtkImageEuclideanToPolarWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageEuclideanToPolar> native = vtkSmartPointer<vtkImageEuclideanToPolar>::New();
		VtkImageEuclideanToPolarWrap* obj = new VtkImageEuclideanToPolarWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageEuclideanToPolarWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanToPolarWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanToPolarWrap>(info.Holder());
	vtkImageEuclideanToPolar *native = (vtkImageEuclideanToPolar *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageEuclideanToPolarWrap::GetThetaMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanToPolarWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanToPolarWrap>(info.Holder());
	vtkImageEuclideanToPolar *native = (vtkImageEuclideanToPolar *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThetaMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageEuclideanToPolarWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanToPolarWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanToPolarWrap>(info.Holder());
	vtkImageEuclideanToPolar *native = (vtkImageEuclideanToPolar *)wrapper->native.GetPointer();
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

void VtkImageEuclideanToPolarWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanToPolarWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanToPolarWrap>(info.Holder());
	vtkImageEuclideanToPolar *native = (vtkImageEuclideanToPolar *)wrapper->native.GetPointer();
	vtkImageEuclideanToPolar * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageEuclideanToPolarWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageEuclideanToPolarWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageEuclideanToPolarWrap *w = new VtkImageEuclideanToPolarWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageEuclideanToPolarWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanToPolarWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanToPolarWrap>(info.Holder());
	vtkImageEuclideanToPolar *native = (vtkImageEuclideanToPolar *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageEuclideanToPolar * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageEuclideanToPolarWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageEuclideanToPolarWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageEuclideanToPolarWrap *w = new VtkImageEuclideanToPolarWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEuclideanToPolarWrap::SetThetaMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEuclideanToPolarWrap *wrapper = ObjectWrap::Unwrap<VtkImageEuclideanToPolarWrap>(info.Holder());
	vtkImageEuclideanToPolar *native = (vtkImageEuclideanToPolar *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThetaMaximum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

