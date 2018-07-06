/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkMarchingContourFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMarchingContourFilterWrap::ptpl;

VtkMarchingContourFilterWrap::VtkMarchingContourFilterWrap()
{ }

VtkMarchingContourFilterWrap::VtkMarchingContourFilterWrap(vtkSmartPointer<vtkMarchingContourFilter> _native)
{ native = _native; }

VtkMarchingContourFilterWrap::~VtkMarchingContourFilterWrap()
{ }

void VtkMarchingContourFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMarchingContourFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MarchingContourFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkMarchingContourFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMarchingContourFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMarchingContourFilterWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "GenerateValues", GenerateValues);
	Nan::SetPrototypeMethod(tpl, "generateValues", GenerateValues);

	Nan::SetPrototypeMethod(tpl, "GetComputeGradients", GetComputeGradients);
	Nan::SetPrototypeMethod(tpl, "getComputeGradients", GetComputeGradients);

	Nan::SetPrototypeMethod(tpl, "GetComputeNormals", GetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "getComputeNormals", GetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "GetComputeScalars", GetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "getComputeScalars", GetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetUseScalarTree", GetUseScalarTree);
	Nan::SetPrototypeMethod(tpl, "getUseScalarTree", GetUseScalarTree);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetComputeGradients", SetComputeGradients);
	Nan::SetPrototypeMethod(tpl, "setComputeGradients", SetComputeGradients);

	Nan::SetPrototypeMethod(tpl, "SetComputeNormals", SetComputeNormals);
	Nan::SetPrototypeMethod(tpl, "setComputeNormals", SetComputeNormals);

	Nan::SetPrototypeMethod(tpl, "SetComputeScalars", SetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "setComputeScalars", SetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetUseScalarTree", SetUseScalarTree);
	Nan::SetPrototypeMethod(tpl, "setUseScalarTree", SetUseScalarTree);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	Nan::SetPrototypeMethod(tpl, "UseScalarTreeOff", UseScalarTreeOff);
	Nan::SetPrototypeMethod(tpl, "useScalarTreeOff", UseScalarTreeOff);

	Nan::SetPrototypeMethod(tpl, "UseScalarTreeOn", UseScalarTreeOn);
	Nan::SetPrototypeMethod(tpl, "useScalarTreeOn", UseScalarTreeOn);

#ifdef VTK_NODE_PLUS_VTKMARCHINGCONTOURFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMARCHINGCONTOURFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMarchingContourFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMarchingContourFilter> native = vtkSmartPointer<vtkMarchingContourFilter>::New();
		VtkMarchingContourFilterWrap* obj = new VtkMarchingContourFilterWrap(native);
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

void VtkMarchingContourFilterWrap::ComputeGradientsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOff();
}

void VtkMarchingContourFilterWrap::ComputeGradientsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOn();
}

void VtkMarchingContourFilterWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkMarchingContourFilterWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkMarchingContourFilterWrap::ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOff();
}

void VtkMarchingContourFilterWrap::ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOn();
}

void VtkMarchingContourFilterWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkMarchingContourFilterWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::GetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeGradients();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMarchingContourFilterWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMarchingContourFilterWrap::GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMarchingContourFilterWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMarchingContourFilterWrap::GetUseScalarTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseScalarTree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMarchingContourFilterWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
	vtkMarchingContourFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMarchingContourFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMarchingContourFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMarchingContourFilterWrap *w = new VtkMarchingContourFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMarchingContourFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMarchingContourFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMarchingContourFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMarchingContourFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMarchingContourFilterWrap *w = new VtkMarchingContourFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMarchingContourFilterWrap::SetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::SetUseScalarTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
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

void VtkMarchingContourFilterWrap::UseScalarTreeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseScalarTreeOff();
}

void VtkMarchingContourFilterWrap::UseScalarTreeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingContourFilterWrap>(info.Holder());
	vtkMarchingContourFilter *native = (vtkMarchingContourFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseScalarTreeOn();
}

