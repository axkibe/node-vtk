/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkDEMReaderWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDEMReaderWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDEMReaderWrap::ptpl;

VtkDEMReaderWrap::VtkDEMReaderWrap()
{ }

VtkDEMReaderWrap::VtkDEMReaderWrap(vtkSmartPointer<vtkDEMReader> _native)
{ native = _native; }

VtkDEMReaderWrap::~VtkDEMReaderWrap()
{ }

void VtkDEMReaderWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkDEMReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkDEMReader").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DEMReader").ToLocalChecked(),tpl->GetFunction());
}

void VtkDEMReaderWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetAccuracyCode", GetAccuracyCode);
	Nan::SetPrototypeMethod(tpl, "getAccuracyCode", GetAccuracyCode);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDEMLevel", GetDEMLevel);
	Nan::SetPrototypeMethod(tpl, "getDEMLevel", GetDEMLevel);

	Nan::SetPrototypeMethod(tpl, "GetElevationPattern", GetElevationPattern);
	Nan::SetPrototypeMethod(tpl, "getElevationPattern", GetElevationPattern);

	Nan::SetPrototypeMethod(tpl, "GetElevationReference", GetElevationReference);
	Nan::SetPrototypeMethod(tpl, "getElevationReference", GetElevationReference);

	Nan::SetPrototypeMethod(tpl, "GetElevationReferenceAsString", GetElevationReferenceAsString);
	Nan::SetPrototypeMethod(tpl, "getElevationReferenceAsString", GetElevationReferenceAsString);

	Nan::SetPrototypeMethod(tpl, "GetElevationReferenceMaxValue", GetElevationReferenceMaxValue);
	Nan::SetPrototypeMethod(tpl, "getElevationReferenceMaxValue", GetElevationReferenceMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetElevationReferenceMinValue", GetElevationReferenceMinValue);
	Nan::SetPrototypeMethod(tpl, "getElevationReferenceMinValue", GetElevationReferenceMinValue);

	Nan::SetPrototypeMethod(tpl, "GetElevationUnitOfMeasure", GetElevationUnitOfMeasure);
	Nan::SetPrototypeMethod(tpl, "getElevationUnitOfMeasure", GetElevationUnitOfMeasure);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetGroundSystem", GetGroundSystem);
	Nan::SetPrototypeMethod(tpl, "getGroundSystem", GetGroundSystem);

	Nan::SetPrototypeMethod(tpl, "GetGroundZone", GetGroundZone);
	Nan::SetPrototypeMethod(tpl, "getGroundZone", GetGroundZone);

	Nan::SetPrototypeMethod(tpl, "GetMapLabel", GetMapLabel);
	Nan::SetPrototypeMethod(tpl, "getMapLabel", GetMapLabel);

	Nan::SetPrototypeMethod(tpl, "GetPlaneUnitOfMeasure", GetPlaneUnitOfMeasure);
	Nan::SetPrototypeMethod(tpl, "getPlaneUnitOfMeasure", GetPlaneUnitOfMeasure);

	Nan::SetPrototypeMethod(tpl, "GetPolygonSize", GetPolygonSize);
	Nan::SetPrototypeMethod(tpl, "getPolygonSize", GetPolygonSize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetElevationReference", SetElevationReference);
	Nan::SetPrototypeMethod(tpl, "setElevationReference", SetElevationReference);

	Nan::SetPrototypeMethod(tpl, "SetElevationReferenceToElevationBounds", SetElevationReferenceToElevationBounds);
	Nan::SetPrototypeMethod(tpl, "setElevationReferenceToElevationBounds", SetElevationReferenceToElevationBounds);

	Nan::SetPrototypeMethod(tpl, "SetElevationReferenceToSeaLevel", SetElevationReferenceToSeaLevel);
	Nan::SetPrototypeMethod(tpl, "setElevationReferenceToSeaLevel", SetElevationReferenceToSeaLevel);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

}

void VtkDEMReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDEMReader> native = vtkSmartPointer<vtkDEMReader>::New();
		VtkDEMReaderWrap* obj = new VtkDEMReaderWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDEMReaderWrap::GetAccuracyCode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccuracyCode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDEMReaderWrap::GetDEMLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDEMLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetElevationPattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElevationPattern();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetElevationReference(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElevationReference();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetElevationReferenceAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElevationReferenceAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDEMReaderWrap::GetElevationReferenceMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElevationReferenceMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetElevationReferenceMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElevationReferenceMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetElevationUnitOfMeasure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElevationUnitOfMeasure();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDEMReaderWrap::GetGroundSystem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGroundSystem();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetGroundZone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGroundZone();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetMapLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapLabel();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDEMReaderWrap::GetPlaneUnitOfMeasure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneUnitOfMeasure();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::GetPolygonSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolygonSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDEMReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
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

void VtkDEMReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	vtkDEMReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDEMReaderWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDEMReaderWrap *w = new VtkDEMReaderWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDEMReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDEMReader * r;
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
			Nan::New<v8::Function>(VtkDEMReaderWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDEMReaderWrap *w = new VtkDEMReaderWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDEMReaderWrap::SetElevationReference(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetElevationReference(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDEMReaderWrap::SetElevationReferenceToElevationBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetElevationReferenceToElevationBounds();
}

void VtkDEMReaderWrap::SetElevationReferenceToSeaLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetElevationReferenceToSeaLevel();
}

void VtkDEMReaderWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDEMReaderWrap *wrapper = ObjectWrap::Unwrap<VtkDEMReaderWrap>(info.Holder());
	vtkDEMReader *native = (vtkDEMReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

