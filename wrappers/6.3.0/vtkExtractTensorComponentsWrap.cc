/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetAlgorithmWrap.h"
#include "vtkExtractTensorComponentsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractTensorComponentsWrap::ptpl;

VtkExtractTensorComponentsWrap::VtkExtractTensorComponentsWrap()
{ }

VtkExtractTensorComponentsWrap::VtkExtractTensorComponentsWrap(vtkSmartPointer<vtkExtractTensorComponents> _native)
{ native = _native; }

VtkExtractTensorComponentsWrap::~VtkExtractTensorComponentsWrap()
{ }

void VtkExtractTensorComponentsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractTensorComponents").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractTensorComponents").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractTensorComponentsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractTensorComponentsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractTensorComponentsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ExtractNormalsOff", ExtractNormalsOff);
	Nan::SetPrototypeMethod(tpl, "extractNormalsOff", ExtractNormalsOff);

	Nan::SetPrototypeMethod(tpl, "ExtractNormalsOn", ExtractNormalsOn);
	Nan::SetPrototypeMethod(tpl, "extractNormalsOn", ExtractNormalsOn);

	Nan::SetPrototypeMethod(tpl, "ExtractScalarsOff", ExtractScalarsOff);
	Nan::SetPrototypeMethod(tpl, "extractScalarsOff", ExtractScalarsOff);

	Nan::SetPrototypeMethod(tpl, "ExtractScalarsOn", ExtractScalarsOn);
	Nan::SetPrototypeMethod(tpl, "extractScalarsOn", ExtractScalarsOn);

	Nan::SetPrototypeMethod(tpl, "ExtractTCoordsOff", ExtractTCoordsOff);
	Nan::SetPrototypeMethod(tpl, "extractTCoordsOff", ExtractTCoordsOff);

	Nan::SetPrototypeMethod(tpl, "ExtractTCoordsOn", ExtractTCoordsOn);
	Nan::SetPrototypeMethod(tpl, "extractTCoordsOn", ExtractTCoordsOn);

	Nan::SetPrototypeMethod(tpl, "ExtractVectorsOff", ExtractVectorsOff);
	Nan::SetPrototypeMethod(tpl, "extractVectorsOff", ExtractVectorsOff);

	Nan::SetPrototypeMethod(tpl, "ExtractVectorsOn", ExtractVectorsOn);
	Nan::SetPrototypeMethod(tpl, "extractVectorsOn", ExtractVectorsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExtractNormals", GetExtractNormals);
	Nan::SetPrototypeMethod(tpl, "getExtractNormals", GetExtractNormals);

	Nan::SetPrototypeMethod(tpl, "GetExtractScalars", GetExtractScalars);
	Nan::SetPrototypeMethod(tpl, "getExtractScalars", GetExtractScalars);

	Nan::SetPrototypeMethod(tpl, "GetExtractTCoords", GetExtractTCoords);
	Nan::SetPrototypeMethod(tpl, "getExtractTCoords", GetExtractTCoords);

	Nan::SetPrototypeMethod(tpl, "GetExtractVectors", GetExtractVectors);
	Nan::SetPrototypeMethod(tpl, "getExtractVectors", GetExtractVectors);

	Nan::SetPrototypeMethod(tpl, "GetNormalizeNormals", GetNormalizeNormals);
	Nan::SetPrototypeMethod(tpl, "getNormalizeNormals", GetNormalizeNormals);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTCoords", GetNumberOfTCoords);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTCoords", GetNumberOfTCoords);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTCoordsMaxValue", GetNumberOfTCoordsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTCoordsMaxValue", GetNumberOfTCoordsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTCoordsMinValue", GetNumberOfTCoordsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTCoordsMinValue", GetNumberOfTCoordsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetPassTensorsToOutput", GetPassTensorsToOutput);
	Nan::SetPrototypeMethod(tpl, "getPassTensorsToOutput", GetPassTensorsToOutput);

	Nan::SetPrototypeMethod(tpl, "GetScalarMode", GetScalarMode);
	Nan::SetPrototypeMethod(tpl, "getScalarMode", GetScalarMode);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NormalizeNormalsOff", NormalizeNormalsOff);
	Nan::SetPrototypeMethod(tpl, "normalizeNormalsOff", NormalizeNormalsOff);

	Nan::SetPrototypeMethod(tpl, "NormalizeNormalsOn", NormalizeNormalsOn);
	Nan::SetPrototypeMethod(tpl, "normalizeNormalsOn", NormalizeNormalsOn);

	Nan::SetPrototypeMethod(tpl, "PassTensorsToOutputOff", PassTensorsToOutputOff);
	Nan::SetPrototypeMethod(tpl, "passTensorsToOutputOff", PassTensorsToOutputOff);

	Nan::SetPrototypeMethod(tpl, "PassTensorsToOutputOn", PassTensorsToOutputOn);
	Nan::SetPrototypeMethod(tpl, "passTensorsToOutputOn", PassTensorsToOutputOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ScalarIsComponent", ScalarIsComponent);
	Nan::SetPrototypeMethod(tpl, "scalarIsComponent", ScalarIsComponent);

	Nan::SetPrototypeMethod(tpl, "ScalarIsDeterminant", ScalarIsDeterminant);
	Nan::SetPrototypeMethod(tpl, "scalarIsDeterminant", ScalarIsDeterminant);

	Nan::SetPrototypeMethod(tpl, "ScalarIsEffectiveStress", ScalarIsEffectiveStress);
	Nan::SetPrototypeMethod(tpl, "scalarIsEffectiveStress", ScalarIsEffectiveStress);

	Nan::SetPrototypeMethod(tpl, "SetExtractNormals", SetExtractNormals);
	Nan::SetPrototypeMethod(tpl, "setExtractNormals", SetExtractNormals);

	Nan::SetPrototypeMethod(tpl, "SetExtractScalars", SetExtractScalars);
	Nan::SetPrototypeMethod(tpl, "setExtractScalars", SetExtractScalars);

	Nan::SetPrototypeMethod(tpl, "SetExtractTCoords", SetExtractTCoords);
	Nan::SetPrototypeMethod(tpl, "setExtractTCoords", SetExtractTCoords);

	Nan::SetPrototypeMethod(tpl, "SetExtractVectors", SetExtractVectors);
	Nan::SetPrototypeMethod(tpl, "setExtractVectors", SetExtractVectors);

	Nan::SetPrototypeMethod(tpl, "SetNormalComponents", SetNormalComponents);
	Nan::SetPrototypeMethod(tpl, "setNormalComponents", SetNormalComponents);

	Nan::SetPrototypeMethod(tpl, "SetNormalizeNormals", SetNormalizeNormals);
	Nan::SetPrototypeMethod(tpl, "setNormalizeNormals", SetNormalizeNormals);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfTCoords", SetNumberOfTCoords);
	Nan::SetPrototypeMethod(tpl, "setNumberOfTCoords", SetNumberOfTCoords);

	Nan::SetPrototypeMethod(tpl, "SetPassTensorsToOutput", SetPassTensorsToOutput);
	Nan::SetPrototypeMethod(tpl, "setPassTensorsToOutput", SetPassTensorsToOutput);

	Nan::SetPrototypeMethod(tpl, "SetScalarComponents", SetScalarComponents);
	Nan::SetPrototypeMethod(tpl, "setScalarComponents", SetScalarComponents);

	Nan::SetPrototypeMethod(tpl, "SetScalarMode", SetScalarMode);
	Nan::SetPrototypeMethod(tpl, "setScalarMode", SetScalarMode);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToComponent", SetScalarModeToComponent);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToComponent", SetScalarModeToComponent);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToDeterminant", SetScalarModeToDeterminant);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToDeterminant", SetScalarModeToDeterminant);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToEffectiveStress", SetScalarModeToEffectiveStress);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToEffectiveStress", SetScalarModeToEffectiveStress);

	Nan::SetPrototypeMethod(tpl, "SetTCoordComponents", SetTCoordComponents);
	Nan::SetPrototypeMethod(tpl, "setTCoordComponents", SetTCoordComponents);

	Nan::SetPrototypeMethod(tpl, "SetVectorComponents", SetVectorComponents);
	Nan::SetPrototypeMethod(tpl, "setVectorComponents", SetVectorComponents);

	ptpl.Reset( tpl );
}

void VtkExtractTensorComponentsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractTensorComponents> native = vtkSmartPointer<vtkExtractTensorComponents>::New();
		VtkExtractTensorComponentsWrap* obj = new VtkExtractTensorComponentsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractTensorComponentsWrap::ExtractNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractNormalsOff();
}

void VtkExtractTensorComponentsWrap::ExtractNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractNormalsOn();
}

void VtkExtractTensorComponentsWrap::ExtractScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractScalarsOff();
}

void VtkExtractTensorComponentsWrap::ExtractScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractScalarsOn();
}

void VtkExtractTensorComponentsWrap::ExtractTCoordsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractTCoordsOff();
}

void VtkExtractTensorComponentsWrap::ExtractTCoordsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractTCoordsOn();
}

void VtkExtractTensorComponentsWrap::ExtractVectorsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractVectorsOff();
}

void VtkExtractTensorComponentsWrap::ExtractVectorsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractVectorsOn();
}

void VtkExtractTensorComponentsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractTensorComponentsWrap::GetExtractNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetExtractScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetExtractTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractTCoords();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetExtractVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractVectors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetNormalizeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalizeNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetNumberOfTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTCoords();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetNumberOfTCoordsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTCoordsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetNumberOfTCoordsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTCoordsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetPassTensorsToOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassTensorsToOutput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractTensorComponentsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
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

void VtkExtractTensorComponentsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	vtkExtractTensorComponents * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtractTensorComponentsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractTensorComponentsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractTensorComponentsWrap *w = new VtkExtractTensorComponentsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractTensorComponentsWrap::NormalizeNormalsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeNormalsOff();
}

void VtkExtractTensorComponentsWrap::NormalizeNormalsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->NormalizeNormalsOn();
}

void VtkExtractTensorComponentsWrap::PassTensorsToOutputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassTensorsToOutputOff();
}

void VtkExtractTensorComponentsWrap::PassTensorsToOutputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassTensorsToOutputOn();
}

void VtkExtractTensorComponentsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractTensorComponents * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtractTensorComponentsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractTensorComponentsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractTensorComponentsWrap *w = new VtkExtractTensorComponentsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::ScalarIsComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarIsComponent();
}

void VtkExtractTensorComponentsWrap::ScalarIsDeterminant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarIsDeterminant();
}

void VtkExtractTensorComponentsWrap::ScalarIsEffectiveStress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ScalarIsEffectiveStress();
}

void VtkExtractTensorComponentsWrap::SetExtractNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtractNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetExtractScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtractScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetExtractTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtractTCoords(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetExtractVectors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtractVectors(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetNormalComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetNormalComponents(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetNormalizeNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNormalizeNormals(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetNumberOfTCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfTCoords(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetPassTensorsToOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassTensorsToOutput(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetScalarComponents(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetScalarModeToComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToComponent();
}

void VtkExtractTensorComponentsWrap::SetScalarModeToDeterminant(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToDeterminant();
}

void VtkExtractTensorComponentsWrap::SetScalarModeToEffectiveStress(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToEffectiveStress();
}

void VtkExtractTensorComponentsWrap::SetTCoordComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetTCoordComponents(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractTensorComponentsWrap::SetVectorComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractTensorComponentsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractTensorComponentsWrap>(info.Holder());
	vtkExtractTensorComponents *native = (vtkExtractTensorComponents *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetVectorComponents(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

