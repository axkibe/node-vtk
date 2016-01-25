/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkPCAAnalysisFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkFloatArrayWrap.h"
#include "vtkPointSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPCAAnalysisFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPCAAnalysisFilterWrap::ptpl;

VtkPCAAnalysisFilterWrap::VtkPCAAnalysisFilterWrap()
{ }

VtkPCAAnalysisFilterWrap::VtkPCAAnalysisFilterWrap(vtkSmartPointer<vtkPCAAnalysisFilter> _native)
{ native = _native; }

VtkPCAAnalysisFilterWrap::~VtkPCAAnalysisFilterWrap()
{ }

void VtkPCAAnalysisFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPCAAnalysisFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPCAAnalysisFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PCAAnalysisFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkPCAAnalysisFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEvals", GetEvals);
	Nan::SetPrototypeMethod(tpl, "getEvals", GetEvals);

	Nan::SetPrototypeMethod(tpl, "GetModesRequiredFor", GetModesRequiredFor);
	Nan::SetPrototypeMethod(tpl, "getModesRequiredFor", GetModesRequiredFor);

	Nan::SetPrototypeMethod(tpl, "GetParameterisedShape", GetParameterisedShape);
	Nan::SetPrototypeMethod(tpl, "getParameterisedShape", GetParameterisedShape);

	Nan::SetPrototypeMethod(tpl, "GetShapeParameters", GetShapeParameters);
	Nan::SetPrototypeMethod(tpl, "getShapeParameters", GetShapeParameters);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkPCAAnalysisFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPCAAnalysisFilter> native = vtkSmartPointer<vtkPCAAnalysisFilter>::New();
		VtkPCAAnalysisFilterWrap* obj = new VtkPCAAnalysisFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPCAAnalysisFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCAAnalysisFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPCAAnalysisFilterWrap>(info.Holder());
	vtkPCAAnalysisFilter *native = (vtkPCAAnalysisFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPCAAnalysisFilterWrap::GetEvals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCAAnalysisFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPCAAnalysisFilterWrap>(info.Holder());
	vtkPCAAnalysisFilter *native = (vtkPCAAnalysisFilter *)wrapper->native.GetPointer();
	vtkFloatArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEvals();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFloatArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFloatArrayWrap *w = new VtkFloatArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPCAAnalysisFilterWrap::GetModesRequiredFor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCAAnalysisFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPCAAnalysisFilterWrap>(info.Holder());
	vtkPCAAnalysisFilter *native = (vtkPCAAnalysisFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetModesRequiredFor(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPCAAnalysisFilterWrap::GetParameterisedShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCAAnalysisFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPCAAnalysisFilterWrap>(info.Holder());
	vtkPCAAnalysisFilter *native = (vtkPCAAnalysisFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkFloatArrayWrap *a0 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkPointSetWrap *a1 = ObjectWrap::Unwrap<VtkPointSetWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetParameterisedShape(
				(vtkFloatArray *) a0->native.GetPointer(),
				(vtkPointSet *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPCAAnalysisFilterWrap::GetShapeParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCAAnalysisFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPCAAnalysisFilterWrap>(info.Holder());
	vtkPCAAnalysisFilter *native = (vtkPCAAnalysisFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPointSetWrap *a0 = ObjectWrap::Unwrap<VtkPointSetWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkFloatArrayWrap *a1 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetShapeParameters(
					(vtkPointSet *) a0->native.GetPointer(),
					(vtkFloatArray *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPCAAnalysisFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCAAnalysisFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPCAAnalysisFilterWrap>(info.Holder());
	vtkPCAAnalysisFilter *native = (vtkPCAAnalysisFilter *)wrapper->native.GetPointer();
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

void VtkPCAAnalysisFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCAAnalysisFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPCAAnalysisFilterWrap>(info.Holder());
	vtkPCAAnalysisFilter *native = (vtkPCAAnalysisFilter *)wrapper->native.GetPointer();
	vtkPCAAnalysisFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPCAAnalysisFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPCAAnalysisFilterWrap *w = new VtkPCAAnalysisFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPCAAnalysisFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPCAAnalysisFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPCAAnalysisFilterWrap>(info.Holder());
	vtkPCAAnalysisFilter *native = (vtkPCAAnalysisFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPCAAnalysisFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPCAAnalysisFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPCAAnalysisFilterWrap *w = new VtkPCAAnalysisFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

