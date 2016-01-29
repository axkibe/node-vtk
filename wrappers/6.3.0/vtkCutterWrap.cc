/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkCutterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCutterWrap::ptpl;

VtkCutterWrap::VtkCutterWrap()
{ }

VtkCutterWrap::VtkCutterWrap(vtkSmartPointer<vtkCutter> _native)
{ native = _native; }

VtkCutterWrap::~VtkCutterWrap()
{ }

void VtkCutterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCutter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Cutter").ToLocalChecked(), ConstructorGetter);
}

void VtkCutterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCutterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCutterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "GenerateCutScalarsOff", GenerateCutScalarsOff);
	Nan::SetPrototypeMethod(tpl, "generateCutScalarsOff", GenerateCutScalarsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateCutScalarsOn", GenerateCutScalarsOn);
	Nan::SetPrototypeMethod(tpl, "generateCutScalarsOn", GenerateCutScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateTrianglesOff", GenerateTrianglesOff);
	Nan::SetPrototypeMethod(tpl, "generateTrianglesOff", GenerateTrianglesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateTrianglesOn", GenerateTrianglesOn);
	Nan::SetPrototypeMethod(tpl, "generateTrianglesOn", GenerateTrianglesOn);

	Nan::SetPrototypeMethod(tpl, "GenerateValues", GenerateValues);
	Nan::SetPrototypeMethod(tpl, "generateValues", GenerateValues);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCutFunction", GetCutFunction);
	Nan::SetPrototypeMethod(tpl, "getCutFunction", GetCutFunction);

	Nan::SetPrototypeMethod(tpl, "GetGenerateCutScalars", GetGenerateCutScalars);
	Nan::SetPrototypeMethod(tpl, "getGenerateCutScalars", GetGenerateCutScalars);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTriangles", GetGenerateTriangles);
	Nan::SetPrototypeMethod(tpl, "getGenerateTriangles", GetGenerateTriangles);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecisionMaxValue", GetOutputPointsPrecisionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecisionMaxValue", GetOutputPointsPrecisionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecisionMinValue", GetOutputPointsPrecisionMinValue);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecisionMinValue", GetOutputPointsPrecisionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSortBy", GetSortBy);
	Nan::SetPrototypeMethod(tpl, "getSortBy", GetSortBy);

	Nan::SetPrototypeMethod(tpl, "GetSortByAsString", GetSortByAsString);
	Nan::SetPrototypeMethod(tpl, "getSortByAsString", GetSortByAsString);

	Nan::SetPrototypeMethod(tpl, "GetSortByMaxValue", GetSortByMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSortByMaxValue", GetSortByMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSortByMinValue", GetSortByMinValue);
	Nan::SetPrototypeMethod(tpl, "getSortByMinValue", GetSortByMinValue);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCutFunction", SetCutFunction);
	Nan::SetPrototypeMethod(tpl, "setCutFunction", SetCutFunction);

	Nan::SetPrototypeMethod(tpl, "SetGenerateCutScalars", SetGenerateCutScalars);
	Nan::SetPrototypeMethod(tpl, "setGenerateCutScalars", SetGenerateCutScalars);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTriangles", SetGenerateTriangles);
	Nan::SetPrototypeMethod(tpl, "setGenerateTriangles", SetGenerateTriangles);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetSortBy", SetSortBy);
	Nan::SetPrototypeMethod(tpl, "setSortBy", SetSortBy);

	Nan::SetPrototypeMethod(tpl, "SetSortByToSortByCell", SetSortByToSortByCell);
	Nan::SetPrototypeMethod(tpl, "setSortByToSortByCell", SetSortByToSortByCell);

	Nan::SetPrototypeMethod(tpl, "SetSortByToSortByValue", SetSortByToSortByValue);
	Nan::SetPrototypeMethod(tpl, "setSortByToSortByValue", SetSortByToSortByValue);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	ptpl.Reset( tpl );
}

void VtkCutterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCutter> native = vtkSmartPointer<vtkCutter>::New();
		VtkCutterWrap* obj = new VtkCutterWrap(native);
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

void VtkCutterWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkCutterWrap::GenerateCutScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateCutScalarsOff();
}

void VtkCutterWrap::GenerateCutScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateCutScalarsOn();
}

void VtkCutterWrap::GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOff();
}

void VtkCutterWrap::GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOn();
}

void VtkCutterWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
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

void VtkCutterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCutterWrap::GetCutFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	vtkImplicitFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCutFunction();
		VtkImplicitFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionWrap *w = new VtkImplicitFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCutterWrap::GetGenerateCutScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateCutScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTriangles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
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

void VtkCutterWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetOutputPointsPrecisionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecisionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetOutputPointsPrecisionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecisionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetSortBy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSortBy();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetSortByAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSortByAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCutterWrap::GetSortByMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSortByMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetSortByMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSortByMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCutterWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
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

void VtkCutterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
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

void VtkCutterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	vtkCutter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCutterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCutterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCutterWrap *w = new VtkCutterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCutterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCutter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCutterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCutterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCutterWrap *w = new VtkCutterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCutterWrap::SetCutFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImplicitFunctionWrap *a0 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCutFunction(
			(vtkImplicitFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCutterWrap::SetGenerateCutScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateCutScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCutterWrap::SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
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

void VtkCutterWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
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

void VtkCutterWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
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

void VtkCutterWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
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

void VtkCutterWrap::SetSortBy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSortBy(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCutterWrap::SetSortByToSortByCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSortByToSortByCell();
}

void VtkCutterWrap::SetSortByToSortByValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSortByToSortByValue();
}

void VtkCutterWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCutterWrap *wrapper = ObjectWrap::Unwrap<VtkCutterWrap>(info.Holder());
	vtkCutter *native = (vtkCutter *)wrapper->native.GetPointer();
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

