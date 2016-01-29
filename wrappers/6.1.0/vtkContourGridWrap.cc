/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkContourGridWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContourGridWrap::ptpl;

VtkContourGridWrap::VtkContourGridWrap()
{ }

VtkContourGridWrap::VtkContourGridWrap(vtkSmartPointer<vtkContourGrid> _native)
{ native = _native; }

VtkContourGridWrap::~VtkContourGridWrap()
{ }

void VtkContourGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContourGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContourGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkContourGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContourGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContourGridWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetUseScalarTree", GetUseScalarTree);
	Nan::SetPrototypeMethod(tpl, "getUseScalarTree", GetUseScalarTree);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

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

	Nan::SetPrototypeMethod(tpl, "SetGenerateTriangles", SetGenerateTriangles);
	Nan::SetPrototypeMethod(tpl, "setGenerateTriangles", SetGenerateTriangles);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetUseScalarTree", SetUseScalarTree);
	Nan::SetPrototypeMethod(tpl, "setUseScalarTree", SetUseScalarTree);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	Nan::SetPrototypeMethod(tpl, "UseScalarTreeOff", UseScalarTreeOff);
	Nan::SetPrototypeMethod(tpl, "useScalarTreeOff", UseScalarTreeOff);

	Nan::SetPrototypeMethod(tpl, "UseScalarTreeOn", UseScalarTreeOn);
	Nan::SetPrototypeMethod(tpl, "useScalarTreeOn", UseScalarTreeOn);

	ptpl.Reset( tpl );
}

void VtkContourGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkContourGrid> native = vtkSmartPointer<vtkContourGrid>::New();
		VtkContourGridWrap* obj = new VtkContourGridWrap(native);
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

void VtkContourGridWrap::ComputeGradientsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOff();
}

void VtkContourGridWrap::ComputeGradientsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeGradientsOn();
}

void VtkContourGridWrap::ComputeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOff();
}

void VtkContourGridWrap::ComputeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeNormalsOn();
}

void VtkContourGridWrap::ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOff();
}

void VtkContourGridWrap::ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOn();
}

void VtkContourGridWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkContourGridWrap::GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOff();
}

void VtkContourGridWrap::GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOn();
}

void VtkContourGridWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkContourGridWrap::GetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeGradients();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourGridWrap::GetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourGridWrap::GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourGridWrap::GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTriangles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourGridWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourGridWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourGridWrap::GetUseScalarTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseScalarTree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContourGridWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	vtkContourGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkContourGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContourGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContourGridWrap *w = new VtkContourGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContourGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkContourGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkContourGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContourGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContourGridWrap *w = new VtkContourGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourGridWrap::SetComputeGradients(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::SetComputeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::SetUseScalarTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
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

void VtkContourGridWrap::UseScalarTreeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseScalarTreeOff();
}

void VtkContourGridWrap::UseScalarTreeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourGridWrap *wrapper = ObjectWrap::Unwrap<VtkContourGridWrap>(info.Holder());
	vtkContourGrid *native = (vtkContourGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseScalarTreeOn();
}

