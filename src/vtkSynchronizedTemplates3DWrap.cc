/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSynchronizedTemplates3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkInformationWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSynchronizedTemplates3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkSynchronizedTemplates3DWrap::ptpl;

VtkSynchronizedTemplates3DWrap::VtkSynchronizedTemplates3DWrap()
{ }

VtkSynchronizedTemplates3DWrap::VtkSynchronizedTemplates3DWrap(vtkSmartPointer<vtkSynchronizedTemplates3D> _native)
{ native = _native; }

VtkSynchronizedTemplates3DWrap::~VtkSynchronizedTemplates3DWrap()
{ }

void VtkSynchronizedTemplates3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSynchronizedTemplates3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SynchronizedTemplates3D").ToLocalChecked(), ConstructorGetter);
}

void VtkSynchronizedTemplates3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSynchronizedTemplates3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSynchronizedTemplates3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeGradientsOff", ComputeGradientsOff);
	Nan::SetPrototypeMethod(tpl, "computeGradientsOff", ComputeGradientsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeGradientsOn", ComputeGradientsOn);
	Nan::SetPrototypeMethod(tpl, "computeGradientsOn", ComputeGradientsOn);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOff", ComputeNormalsOff);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOff", ComputeNormalsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeNormalsOn", ComputeNormalsOn);
	Nan::SetPrototypeMethod(tpl, "computeNormalsOn", ComputeNormalsOn);

	Nan::SetPrototypeMethod(tpl, "ComputeScalarsOff", ComputeScalarsOff);
	Nan::SetPrototypeMethod(tpl, "computeScalarsOff", ComputeScalarsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeScalarsOn", ComputeScalarsOn);
	Nan::SetPrototypeMethod(tpl, "computeScalarsOn", ComputeScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateTrianglesOff", GenerateTrianglesOff);
	Nan::SetPrototypeMethod(tpl, "generateTrianglesOff", GenerateTrianglesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateTrianglesOn", GenerateTrianglesOn);
	Nan::SetPrototypeMethod(tpl, "generateTrianglesOn", GenerateTrianglesOn);

	Nan::SetPrototypeMethod(tpl, "GenerateValues", GenerateValues);
	Nan::SetPrototypeMethod(tpl, "generateValues", GenerateValues);

	Nan::SetPrototypeMethod(tpl, "GetArrayComponent", GetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "getArrayComponent", GetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeGradients", GetComputeGradients);
	Nan::SetPrototypeMethod(tpl, "getComputeGradients", GetComputeGradients);

	Nan::SetPrototypeMethod(tpl, "GetComputeNormals", GetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "getComputeNormals", GetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "GetComputeScalars", GetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "getComputeScalars", GetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTriangles", GetGenerateTriangles);
	Nan::SetPrototypeMethod(tpl, "getGenerateTriangles", GetGenerateTriangles);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayComponent", SetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "setArrayComponent", SetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "SetComputeGradients", SetComputeGradients);
	Nan::SetPrototypeMethod(tpl, "setComputeGradients", SetComputeGradients);

	Nan::SetPrototypeMethod(tpl, "SetComputeNormals", SetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "setComputeNormals", SetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "SetComputeScalars", SetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "setComputeScalars", SetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTriangles", SetGenerateTriangles);
	Nan::SetPrototypeMethod(tpl, "setGenerateTriangles", SetGenerateTriangles);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	Nan::SetPrototypeMethod(tpl, "ThreadedExecute", ThreadedExecute);
	Nan::SetPrototypeMethod(tpl, "threadedExecute", ThreadedExecute);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkSynchronizedTemplates3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSynchronizedTemplates3D> native = vtkSmartPointer<vtkSynchronizedTemplates3D>::New();
		VtkSynchronizedTemplates3DWrap* obj = new VtkSynchronizedTemplates3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSynchronizedTemplates3DWrap::ComputeGradientsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOff();
}

void VtkSynchronizedTemplates3DWrap::ComputeGradientsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOn();
}

void VtkSynchronizedTemplates3DWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkSynchronizedTemplates3DWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkSynchronizedTemplates3DWrap::ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOff();
}

void VtkSynchronizedTemplates3DWrap::ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOn();
}

void VtkSynchronizedTemplates3DWrap::GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOff();
}

void VtkSynchronizedTemplates3DWrap::GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOn();
}

void VtkSynchronizedTemplates3DWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GenerateValues(
					info[0]->Int32Value(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSynchronizedTemplates3DWrap::GetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeGradients();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates3DWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates3DWrap::GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates3DWrap::GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTriangles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates3DWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates3DWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetValue(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkSynchronizedTemplates3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	vtkSynchronizedTemplates3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkSynchronizedTemplates3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSynchronizedTemplates3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSynchronizedTemplates3DWrap *w = new VtkSynchronizedTemplates3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSynchronizedTemplates3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSynchronizedTemplates3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkSynchronizedTemplates3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSynchronizedTemplates3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSynchronizedTemplates3DWrap *w = new VtkSynchronizedTemplates3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::SetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeGradients(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateTriangles(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfContours(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetValue(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates3DWrap::ThreadedExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates3DWrap>(info.Holder());
	vtkSynchronizedTemplates3D *native = (vtkSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[2]))
			{
				VtkInformationWrap *a2 = ObjectWrap::Unwrap<VtkInformationWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkDataArrayWrap *a3 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->ThreadedExecute(
						(vtkImageData *) a0->native.GetPointer(),
						(vtkInformation *) a1->native.GetPointer(),
						(vtkInformation *) a2->native.GetPointer(),
						(vtkDataArray *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

