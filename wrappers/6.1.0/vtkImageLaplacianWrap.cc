/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageLaplacianWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageLaplacianWrap::ptpl;

VtkImageLaplacianWrap::VtkImageLaplacianWrap()
{ }

VtkImageLaplacianWrap::VtkImageLaplacianWrap(vtkSmartPointer<vtkImageLaplacian> _native)
{ native = _native; }

VtkImageLaplacianWrap::~VtkImageLaplacianWrap()
{ }

void VtkImageLaplacianWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageLaplacian").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageLaplacian").ToLocalChecked(), ConstructorGetter);
}

void VtkImageLaplacianWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageLaplacianWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageLaplacianWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimensionality", GetDimensionality);
	Nan::SetPrototypeMethod(tpl, "getDimensionality", GetDimensionality);

	Nan::SetPrototypeMethod(tpl, "GetDimensionalityMaxValue", GetDimensionalityMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDimensionalityMaxValue", GetDimensionalityMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDimensionalityMinValue", GetDimensionalityMinValue);
	Nan::SetPrototypeMethod(tpl, "getDimensionalityMinValue", GetDimensionalityMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimensionality", SetDimensionality);
	Nan::SetPrototypeMethod(tpl, "setDimensionality", SetDimensionality);

	ptpl.Reset( tpl );
}

void VtkImageLaplacianWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageLaplacian> native = vtkSmartPointer<vtkImageLaplacian>::New();
		VtkImageLaplacianWrap* obj = new VtkImageLaplacianWrap(native);
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

void VtkImageLaplacianWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLaplacianWrap *wrapper = ObjectWrap::Unwrap<VtkImageLaplacianWrap>(info.Holder());
	vtkImageLaplacian *native = (vtkImageLaplacian *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageLaplacianWrap::GetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLaplacianWrap *wrapper = ObjectWrap::Unwrap<VtkImageLaplacianWrap>(info.Holder());
	vtkImageLaplacian *native = (vtkImageLaplacian *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionality();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageLaplacianWrap::GetDimensionalityMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLaplacianWrap *wrapper = ObjectWrap::Unwrap<VtkImageLaplacianWrap>(info.Holder());
	vtkImageLaplacian *native = (vtkImageLaplacian *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionalityMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageLaplacianWrap::GetDimensionalityMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLaplacianWrap *wrapper = ObjectWrap::Unwrap<VtkImageLaplacianWrap>(info.Holder());
	vtkImageLaplacian *native = (vtkImageLaplacian *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionalityMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageLaplacianWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLaplacianWrap *wrapper = ObjectWrap::Unwrap<VtkImageLaplacianWrap>(info.Holder());
	vtkImageLaplacian *native = (vtkImageLaplacian *)wrapper->native.GetPointer();
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

void VtkImageLaplacianWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLaplacianWrap *wrapper = ObjectWrap::Unwrap<VtkImageLaplacianWrap>(info.Holder());
	vtkImageLaplacian *native = (vtkImageLaplacian *)wrapper->native.GetPointer();
	vtkImageLaplacian * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageLaplacianWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageLaplacianWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageLaplacianWrap *w = new VtkImageLaplacianWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageLaplacianWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLaplacianWrap *wrapper = ObjectWrap::Unwrap<VtkImageLaplacianWrap>(info.Holder());
	vtkImageLaplacian *native = (vtkImageLaplacian *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageLaplacian * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageLaplacianWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageLaplacianWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageLaplacianWrap *w = new VtkImageLaplacianWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageLaplacianWrap::SetDimensionality(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageLaplacianWrap *wrapper = ObjectWrap::Unwrap<VtkImageLaplacianWrap>(info.Holder());
	vtkImageLaplacian *native = (vtkImageLaplacian *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimensionality(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

