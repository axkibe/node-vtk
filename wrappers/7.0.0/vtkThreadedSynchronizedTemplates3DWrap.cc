/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkThreadedSynchronizedTemplates3DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkInformationWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkThreadedSynchronizedTemplates3DWrap::ptpl;

VtkThreadedSynchronizedTemplates3DWrap::VtkThreadedSynchronizedTemplates3DWrap()
{ }

VtkThreadedSynchronizedTemplates3DWrap::VtkThreadedSynchronizedTemplates3DWrap(vtkSmartPointer<vtkThreadedSynchronizedTemplates3D> _native)
{ native = _native; }

VtkThreadedSynchronizedTemplates3DWrap::~VtkThreadedSynchronizedTemplates3DWrap()
{ }

void VtkThreadedSynchronizedTemplates3DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkThreadedSynchronizedTemplates3D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ThreadedSynchronizedTemplates3D").ToLocalChecked(), ConstructorGetter);
}

void VtkThreadedSynchronizedTemplates3DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkThreadedSynchronizedTemplates3DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkThreadedSynchronizedTemplates3DWrap").ToLocalChecked());
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

	ptpl.Reset( tpl );
}

void VtkThreadedSynchronizedTemplates3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkThreadedSynchronizedTemplates3D> native = vtkSmartPointer<vtkThreadedSynchronizedTemplates3D>::New();
		VtkThreadedSynchronizedTemplates3DWrap* obj = new VtkThreadedSynchronizedTemplates3DWrap(native);
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

void VtkThreadedSynchronizedTemplates3DWrap::ComputeGradientsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOff();
}

void VtkThreadedSynchronizedTemplates3DWrap::ComputeGradientsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOn();
}

void VtkThreadedSynchronizedTemplates3DWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkThreadedSynchronizedTemplates3DWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkThreadedSynchronizedTemplates3DWrap::ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOff();
}

void VtkThreadedSynchronizedTemplates3DWrap::ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOn();
}

void VtkThreadedSynchronizedTemplates3DWrap::GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOff();
}

void VtkThreadedSynchronizedTemplates3DWrap::GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOn();
}

void VtkThreadedSynchronizedTemplates3DWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GenerateValues(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GenerateValues(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
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

void VtkThreadedSynchronizedTemplates3DWrap::GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedSynchronizedTemplates3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkThreadedSynchronizedTemplates3DWrap::GetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeGradients();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedSynchronizedTemplates3DWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedSynchronizedTemplates3DWrap::GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedSynchronizedTemplates3DWrap::GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTriangles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedSynchronizedTemplates3DWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkThreadedSynchronizedTemplates3DWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	vtkThreadedSynchronizedTemplates3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkThreadedSynchronizedTemplates3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkThreadedSynchronizedTemplates3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkThreadedSynchronizedTemplates3DWrap *w = new VtkThreadedSynchronizedTemplates3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkThreadedSynchronizedTemplates3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkThreadedSynchronizedTemplates3D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkThreadedSynchronizedTemplates3DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkThreadedSynchronizedTemplates3DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkThreadedSynchronizedTemplates3DWrap *w = new VtkThreadedSynchronizedTemplates3DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkThreadedSynchronizedTemplates3DWrap::SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::SetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

void VtkThreadedSynchronizedTemplates3DWrap::ThreadedExecute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkThreadedSynchronizedTemplates3DWrap *wrapper = ObjectWrap::Unwrap<VtkThreadedSynchronizedTemplates3DWrap>(info.Holder());
	vtkThreadedSynchronizedTemplates3D *native = (vtkThreadedSynchronizedTemplates3D *)wrapper->native.GetPointer();
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

