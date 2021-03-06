/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkContourFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkScalarTreeWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContourFilterWrap::ptpl;

VtkContourFilterWrap::VtkContourFilterWrap()
{ }

VtkContourFilterWrap::VtkContourFilterWrap(vtkSmartPointer<vtkContourFilter> _native)
{ native = _native; }

VtkContourFilterWrap::~VtkContourFilterWrap()
{ }

void VtkContourFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContourFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContourFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkContourFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContourFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContourFilterWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "GenerateTrianglesOff", GenerateTrianglesOff);
	Nan::SetPrototypeMethod(tpl, "generateTrianglesOff", GenerateTrianglesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateTrianglesOn", GenerateTrianglesOn);
	Nan::SetPrototypeMethod(tpl, "generateTrianglesOn", GenerateTrianglesOn);

	Nan::SetPrototypeMethod(tpl, "GenerateValues", GenerateValues);
	Nan::SetPrototypeMethod(tpl, "generateValues", GenerateValues);

	Nan::SetPrototypeMethod(tpl, "GetArrayComponent", GetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "getArrayComponent", GetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "GetComputeGradients", GetComputeGradients);
	Nan::SetPrototypeMethod(tpl, "getComputeGradients", GetComputeGradients);

	Nan::SetPrototypeMethod(tpl, "GetComputeNormals", GetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "getComputeNormals", GetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "GetComputeScalars", GetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "getComputeScalars", GetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTriangles", GetGenerateTriangles);
	Nan::SetPrototypeMethod(tpl, "getGenerateTriangles", GetGenerateTriangles);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetScalarTree", GetScalarTree);
	Nan::SetPrototypeMethod(tpl, "getScalarTree", GetScalarTree);

	Nan::SetPrototypeMethod(tpl, "GetUseScalarTree", GetUseScalarTree);
	Nan::SetPrototypeMethod(tpl, "getUseScalarTree", GetUseScalarTree);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

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

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetScalarTree", SetScalarTree);
	Nan::SetPrototypeMethod(tpl, "setScalarTree", SetScalarTree);

	Nan::SetPrototypeMethod(tpl, "SetUseScalarTree", SetUseScalarTree);
	Nan::SetPrototypeMethod(tpl, "setUseScalarTree", SetUseScalarTree);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	Nan::SetPrototypeMethod(tpl, "UseScalarTreeOff", UseScalarTreeOff);
	Nan::SetPrototypeMethod(tpl, "useScalarTreeOff", UseScalarTreeOff);

	Nan::SetPrototypeMethod(tpl, "UseScalarTreeOn", UseScalarTreeOn);
	Nan::SetPrototypeMethod(tpl, "useScalarTreeOn", UseScalarTreeOn);

#ifdef VTK_NODE_PLUS_VTKCONTOURFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCONTOURFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkContourFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkContourFilter> native = vtkSmartPointer<vtkContourFilter>::New();
		VtkContourFilterWrap* obj = new VtkContourFilterWrap(native);
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

void VtkContourFilterWrap::ComputeGradientsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOff();
}

void VtkContourFilterWrap::ComputeGradientsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOn();
}

void VtkContourFilterWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkContourFilterWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkContourFilterWrap::ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOff();
}

void VtkContourFilterWrap::ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOn();
}

void VtkContourFilterWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkContourFilterWrap::GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOff();
}

void VtkContourFilterWrap::GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOn();
}

void VtkContourFilterWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourFilterWrap::GetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeGradients();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourFilterWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourFilterWrap::GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourFilterWrap::GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTriangles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourFilterWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	VtkIncrementalPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContourFilterWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourFilterWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourFilterWrap::GetScalarTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	vtkScalarTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarTree();
	VtkScalarTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarTreeWrap *w = new VtkScalarTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContourFilterWrap::GetUseScalarTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseScalarTree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourFilterWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	vtkContourFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkContourFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContourFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContourFilterWrap *w = new VtkContourFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContourFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkContourFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkContourFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContourFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContourFilterWrap *w = new VtkContourFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourFilterWrap::SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::SetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourFilterWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourFilterWrap::SetScalarTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkScalarTreeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkScalarTreeWrap *a0 = ObjectWrap::Unwrap<VtkScalarTreeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarTree(
			(vtkScalarTree *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourFilterWrap::SetUseScalarTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseScalarTree(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourFilterWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
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

void VtkContourFilterWrap::UseScalarTreeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseScalarTreeOff();
}

void VtkContourFilterWrap::UseScalarTreeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkContourFilterWrap>(info.Holder());
	vtkContourFilter *native = (vtkContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseScalarTreeOn();
}

