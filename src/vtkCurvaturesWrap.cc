/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkCurvaturesWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkCurvaturesWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkCurvaturesWrap::ptpl;

VtkCurvaturesWrap::VtkCurvaturesWrap()
{ }

VtkCurvaturesWrap::VtkCurvaturesWrap(vtkSmartPointer<vtkCurvatures> _native)
{ native = _native; }

VtkCurvaturesWrap::~VtkCurvaturesWrap()
{ }

void VtkCurvaturesWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkCurvaturesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkCurvatures").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Curvatures").ToLocalChecked(),tpl->GetFunction());
}

void VtkCurvaturesWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCurvatureType", GetCurvatureType);
	Nan::SetPrototypeMethod(tpl, "getCurvatureType", GetCurvatureType);

	Nan::SetPrototypeMethod(tpl, "GetInvertMeanCurvature", GetInvertMeanCurvature);
	Nan::SetPrototypeMethod(tpl, "getInvertMeanCurvature", GetInvertMeanCurvature);

	Nan::SetPrototypeMethod(tpl, "InvertMeanCurvatureOff", InvertMeanCurvatureOff);
	Nan::SetPrototypeMethod(tpl, "invertMeanCurvatureOff", InvertMeanCurvatureOff);

	Nan::SetPrototypeMethod(tpl, "InvertMeanCurvatureOn", InvertMeanCurvatureOn);
	Nan::SetPrototypeMethod(tpl, "invertMeanCurvatureOn", InvertMeanCurvatureOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCurvatureType", SetCurvatureType);
	Nan::SetPrototypeMethod(tpl, "setCurvatureType", SetCurvatureType);

	Nan::SetPrototypeMethod(tpl, "SetCurvatureTypeToGaussian", SetCurvatureTypeToGaussian);
	Nan::SetPrototypeMethod(tpl, "setCurvatureTypeToGaussian", SetCurvatureTypeToGaussian);

	Nan::SetPrototypeMethod(tpl, "SetCurvatureTypeToMaximum", SetCurvatureTypeToMaximum);
	Nan::SetPrototypeMethod(tpl, "setCurvatureTypeToMaximum", SetCurvatureTypeToMaximum);

	Nan::SetPrototypeMethod(tpl, "SetCurvatureTypeToMean", SetCurvatureTypeToMean);
	Nan::SetPrototypeMethod(tpl, "setCurvatureTypeToMean", SetCurvatureTypeToMean);

	Nan::SetPrototypeMethod(tpl, "SetCurvatureTypeToMinimum", SetCurvatureTypeToMinimum);
	Nan::SetPrototypeMethod(tpl, "setCurvatureTypeToMinimum", SetCurvatureTypeToMinimum);

	Nan::SetPrototypeMethod(tpl, "SetInvertMeanCurvature", SetInvertMeanCurvature);
	Nan::SetPrototypeMethod(tpl, "setInvertMeanCurvature", SetInvertMeanCurvature);

}

void VtkCurvaturesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCurvatures> native = vtkSmartPointer<vtkCurvatures>::New();
		VtkCurvaturesWrap* obj = new VtkCurvaturesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCurvaturesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCurvaturesWrap::GetCurvatureType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCurvatureType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCurvaturesWrap::GetInvertMeanCurvature(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInvertMeanCurvature();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCurvaturesWrap::InvertMeanCurvatureOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InvertMeanCurvatureOff();
}

void VtkCurvaturesWrap::InvertMeanCurvatureOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InvertMeanCurvatureOn();
}

void VtkCurvaturesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
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

void VtkCurvaturesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	vtkCurvatures * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkCurvaturesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCurvaturesWrap *w = new VtkCurvaturesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCurvaturesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCurvatures * r;
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
			Nan::New<v8::Function>(VtkCurvaturesWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCurvaturesWrap *w = new VtkCurvaturesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCurvaturesWrap::SetCurvatureType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCurvatureType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCurvaturesWrap::SetCurvatureTypeToGaussian(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCurvatureTypeToGaussian();
}

void VtkCurvaturesWrap::SetCurvatureTypeToMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCurvatureTypeToMaximum();
}

void VtkCurvaturesWrap::SetCurvatureTypeToMean(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCurvatureTypeToMean();
}

void VtkCurvaturesWrap::SetCurvatureTypeToMinimum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetCurvatureTypeToMinimum();
}

void VtkCurvaturesWrap::SetInvertMeanCurvature(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCurvaturesWrap *wrapper = ObjectWrap::Unwrap<VtkCurvaturesWrap>(info.Holder());
	vtkCurvatures *native = (vtkCurvatures *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInvertMeanCurvature(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
