/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageSpatialAlgorithmWrap.h"
#include "vtkImageAnisotropicDiffusion3DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageAnisotropicDiffusion3DWrap::ptpl;

VtkImageAnisotropicDiffusion3DWrap::VtkImageAnisotropicDiffusion3DWrap()
{ }

VtkImageAnisotropicDiffusion3DWrap::VtkImageAnisotropicDiffusion3DWrap(vtkSmartPointer<vtkImageAnisotropicDiffusion3D> _native)
{ native = _native; }

VtkImageAnisotropicDiffusion3DWrap::~VtkImageAnisotropicDiffusion3DWrap()
{ }

void VtkImageAnisotropicDiffusion3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageAnisotropicDiffusion3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageAnisotropicDiffusion3D").ToLocalChecked(), ConstructorGetter);
}

void VtkImageAnisotropicDiffusion3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageAnisotropicDiffusion3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageSpatialAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageSpatialAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageAnisotropicDiffusion3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CornersOff", CornersOff);
	Nan::SetPrototypeMethod(tpl, "cornersOff", CornersOff);

	Nan::SetPrototypeMethod(tpl, "CornersOn", CornersOn);
	Nan::SetPrototypeMethod(tpl, "cornersOn", CornersOn);

	Nan::SetPrototypeMethod(tpl, "EdgesOff", EdgesOff);
	Nan::SetPrototypeMethod(tpl, "edgesOff", EdgesOff);

	Nan::SetPrototypeMethod(tpl, "EdgesOn", EdgesOn);
	Nan::SetPrototypeMethod(tpl, "edgesOn", EdgesOn);

	Nan::SetPrototypeMethod(tpl, "FacesOff", FacesOff);
	Nan::SetPrototypeMethod(tpl, "facesOff", FacesOff);

	Nan::SetPrototypeMethod(tpl, "FacesOn", FacesOn);
	Nan::SetPrototypeMethod(tpl, "facesOn", FacesOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCorners", GetCorners);
	Nan::SetPrototypeMethod(tpl, "getCorners", GetCorners);

	Nan::SetPrototypeMethod(tpl, "GetDiffusionFactor", GetDiffusionFactor);
	Nan::SetPrototypeMethod(tpl, "getDiffusionFactor", GetDiffusionFactor);

	Nan::SetPrototypeMethod(tpl, "GetDiffusionThreshold", GetDiffusionThreshold);
	Nan::SetPrototypeMethod(tpl, "getDiffusionThreshold", GetDiffusionThreshold);

	Nan::SetPrototypeMethod(tpl, "GetEdges", GetEdges);
	Nan::SetPrototypeMethod(tpl, "getEdges", GetEdges);

	Nan::SetPrototypeMethod(tpl, "GetFaces", GetFaces);
	Nan::SetPrototypeMethod(tpl, "getFaces", GetFaces);

	Nan::SetPrototypeMethod(tpl, "GetGradientMagnitudeThreshold", GetGradientMagnitudeThreshold);
	Nan::SetPrototypeMethod(tpl, "getGradientMagnitudeThreshold", GetGradientMagnitudeThreshold);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfIterations", GetNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "getNumberOfIterations", GetNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "GradientMagnitudeThresholdOff", GradientMagnitudeThresholdOff);
	Nan::SetPrototypeMethod(tpl, "gradientMagnitudeThresholdOff", GradientMagnitudeThresholdOff);

	Nan::SetPrototypeMethod(tpl, "GradientMagnitudeThresholdOn", GradientMagnitudeThresholdOn);
	Nan::SetPrototypeMethod(tpl, "gradientMagnitudeThresholdOn", GradientMagnitudeThresholdOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCorners", SetCorners);
	Nan::SetPrototypeMethod(tpl, "setCorners", SetCorners);

	Nan::SetPrototypeMethod(tpl, "SetDiffusionFactor", SetDiffusionFactor);
	Nan::SetPrototypeMethod(tpl, "setDiffusionFactor", SetDiffusionFactor);

	Nan::SetPrototypeMethod(tpl, "SetDiffusionThreshold", SetDiffusionThreshold);
	Nan::SetPrototypeMethod(tpl, "setDiffusionThreshold", SetDiffusionThreshold);

	Nan::SetPrototypeMethod(tpl, "SetEdges", SetEdges);
	Nan::SetPrototypeMethod(tpl, "setEdges", SetEdges);

	Nan::SetPrototypeMethod(tpl, "SetFaces", SetFaces);
	Nan::SetPrototypeMethod(tpl, "setFaces", SetFaces);

	Nan::SetPrototypeMethod(tpl, "SetGradientMagnitudeThreshold", SetGradientMagnitudeThreshold);
	Nan::SetPrototypeMethod(tpl, "setGradientMagnitudeThreshold", SetGradientMagnitudeThreshold);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfIterations", SetNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "setNumberOfIterations", SetNumberOfIterations);

	ptpl.Reset( tpl );
}

void VtkImageAnisotropicDiffusion3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageAnisotropicDiffusion3D> native = vtkSmartPointer<vtkImageAnisotropicDiffusion3D>::New();
		VtkImageAnisotropicDiffusion3DWrap* obj = new VtkImageAnisotropicDiffusion3DWrap(native);
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

void VtkImageAnisotropicDiffusion3DWrap::CornersOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CornersOff();
}

void VtkImageAnisotropicDiffusion3DWrap::CornersOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CornersOn();
}

void VtkImageAnisotropicDiffusion3DWrap::EdgesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EdgesOff();
}

void VtkImageAnisotropicDiffusion3DWrap::EdgesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EdgesOn();
}

void VtkImageAnisotropicDiffusion3DWrap::FacesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FacesOff();
}

void VtkImageAnisotropicDiffusion3DWrap::FacesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FacesOn();
}

void VtkImageAnisotropicDiffusion3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageAnisotropicDiffusion3DWrap::GetCorners(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCorners();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAnisotropicDiffusion3DWrap::GetDiffusionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDiffusionFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAnisotropicDiffusion3DWrap::GetDiffusionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDiffusionThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAnisotropicDiffusion3DWrap::GetEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAnisotropicDiffusion3DWrap::GetFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAnisotropicDiffusion3DWrap::GetGradientMagnitudeThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGradientMagnitudeThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAnisotropicDiffusion3DWrap::GetNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageAnisotropicDiffusion3DWrap::GradientMagnitudeThresholdOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GradientMagnitudeThresholdOff();
}

void VtkImageAnisotropicDiffusion3DWrap::GradientMagnitudeThresholdOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GradientMagnitudeThresholdOn();
}

void VtkImageAnisotropicDiffusion3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
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

void VtkImageAnisotropicDiffusion3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	vtkImageAnisotropicDiffusion3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageAnisotropicDiffusion3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageAnisotropicDiffusion3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageAnisotropicDiffusion3DWrap *w = new VtkImageAnisotropicDiffusion3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageAnisotropicDiffusion3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageAnisotropicDiffusion3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageAnisotropicDiffusion3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageAnisotropicDiffusion3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageAnisotropicDiffusion3DWrap *w = new VtkImageAnisotropicDiffusion3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAnisotropicDiffusion3DWrap::SetCorners(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCorners(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAnisotropicDiffusion3DWrap::SetDiffusionFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDiffusionFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAnisotropicDiffusion3DWrap::SetDiffusionThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDiffusionThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAnisotropicDiffusion3DWrap::SetEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdges(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAnisotropicDiffusion3DWrap::SetFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFaces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAnisotropicDiffusion3DWrap::SetGradientMagnitudeThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGradientMagnitudeThreshold(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageAnisotropicDiffusion3DWrap::SetNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageAnisotropicDiffusion3DWrap *wrapper = ObjectWrap::Unwrap<VtkImageAnisotropicDiffusion3DWrap>(info.Holder());
	vtkImageAnisotropicDiffusion3D *native = (vtkImageAnisotropicDiffusion3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfIterations(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
