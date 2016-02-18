/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkNetCDFReaderWrap.h"
#include "vtkNetCDFCFReaderWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkNetCDFCFReaderWrap::ptpl;

VtkNetCDFCFReaderWrap::VtkNetCDFCFReaderWrap()
{ }

VtkNetCDFCFReaderWrap::VtkNetCDFCFReaderWrap(vtkSmartPointer<vtkNetCDFCFReader> _native)
{ native = _native; }

VtkNetCDFCFReaderWrap::~VtkNetCDFCFReaderWrap()
{ }

void VtkNetCDFCFReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkNetCDFCFReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("NetCDFCFReader").ToLocalChecked(), ConstructorGetter);
}

void VtkNetCDFCFReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkNetCDFCFReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkNetCDFReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkNetCDFReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkNetCDFCFReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOutputType", GetOutputType);
	Nan::SetPrototypeMethod(tpl, "getOutputType", GetOutputType);

	Nan::SetPrototypeMethod(tpl, "GetSphericalCoordinates", GetSphericalCoordinates);
	Nan::SetPrototypeMethod(tpl, "getSphericalCoordinates", GetSphericalCoordinates);

	Nan::SetPrototypeMethod(tpl, "GetVerticalBias", GetVerticalBias);
	Nan::SetPrototypeMethod(tpl, "getVerticalBias", GetVerticalBias);

	Nan::SetPrototypeMethod(tpl, "GetVerticalScale", GetVerticalScale);
	Nan::SetPrototypeMethod(tpl, "getVerticalScale", GetVerticalScale);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputType", SetOutputType);
	Nan::SetPrototypeMethod(tpl, "setOutputType", SetOutputType);

	Nan::SetPrototypeMethod(tpl, "SetOutputTypeToAutomatic", SetOutputTypeToAutomatic);
	Nan::SetPrototypeMethod(tpl, "setOutputTypeToAutomatic", SetOutputTypeToAutomatic);

	Nan::SetPrototypeMethod(tpl, "SetOutputTypeToImage", SetOutputTypeToImage);
	Nan::SetPrototypeMethod(tpl, "setOutputTypeToImage", SetOutputTypeToImage);

	Nan::SetPrototypeMethod(tpl, "SetOutputTypeToRectilinear", SetOutputTypeToRectilinear);
	Nan::SetPrototypeMethod(tpl, "setOutputTypeToRectilinear", SetOutputTypeToRectilinear);

	Nan::SetPrototypeMethod(tpl, "SetOutputTypeToStructured", SetOutputTypeToStructured);
	Nan::SetPrototypeMethod(tpl, "setOutputTypeToStructured", SetOutputTypeToStructured);

	Nan::SetPrototypeMethod(tpl, "SetOutputTypeToUnstructured", SetOutputTypeToUnstructured);
	Nan::SetPrototypeMethod(tpl, "setOutputTypeToUnstructured", SetOutputTypeToUnstructured);

	Nan::SetPrototypeMethod(tpl, "SetSphericalCoordinates", SetSphericalCoordinates);
	Nan::SetPrototypeMethod(tpl, "setSphericalCoordinates", SetSphericalCoordinates);

	Nan::SetPrototypeMethod(tpl, "SetVerticalBias", SetVerticalBias);
	Nan::SetPrototypeMethod(tpl, "setVerticalBias", SetVerticalBias);

	Nan::SetPrototypeMethod(tpl, "SetVerticalScale", SetVerticalScale);
	Nan::SetPrototypeMethod(tpl, "setVerticalScale", SetVerticalScale);

	Nan::SetPrototypeMethod(tpl, "SphericalCoordinatesOff", SphericalCoordinatesOff);
	Nan::SetPrototypeMethod(tpl, "sphericalCoordinatesOff", SphericalCoordinatesOff);

	Nan::SetPrototypeMethod(tpl, "SphericalCoordinatesOn", SphericalCoordinatesOn);
	Nan::SetPrototypeMethod(tpl, "sphericalCoordinatesOn", SphericalCoordinatesOn);

#ifdef VTK_NODE_PLUS_VTKNETCDFCFREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKNETCDFCFREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkNetCDFCFReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkNetCDFCFReader> native = vtkSmartPointer<vtkNetCDFCFReader>::New();
		VtkNetCDFCFReaderWrap* obj = new VtkNetCDFCFReaderWrap(native);
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

void VtkNetCDFCFReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CanReadFile(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCFReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkNetCDFCFReaderWrap::GetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFCFReaderWrap::GetSphericalCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSphericalCoordinates();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFCFReaderWrap::GetVerticalBias(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalBias();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFCFReaderWrap::GetVerticalScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVerticalScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkNetCDFCFReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
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

void VtkNetCDFCFReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	vtkNetCDFCFReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkNetCDFCFReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkNetCDFCFReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkNetCDFCFReaderWrap *w = new VtkNetCDFCFReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkNetCDFCFReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkNetCDFCFReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkNetCDFCFReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkNetCDFCFReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkNetCDFCFReaderWrap *w = new VtkNetCDFCFReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCFReaderWrap::SetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCFReaderWrap::SetOutputTypeToAutomatic(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputTypeToAutomatic();
}

void VtkNetCDFCFReaderWrap::SetOutputTypeToImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputTypeToImage();
}

void VtkNetCDFCFReaderWrap::SetOutputTypeToRectilinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputTypeToRectilinear();
}

void VtkNetCDFCFReaderWrap::SetOutputTypeToStructured(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputTypeToStructured();
}

void VtkNetCDFCFReaderWrap::SetOutputTypeToUnstructured(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputTypeToUnstructured();
}

void VtkNetCDFCFReaderWrap::SetSphericalCoordinates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSphericalCoordinates(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCFReaderWrap::SetVerticalBias(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVerticalBias(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCFReaderWrap::SetVerticalScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVerticalScale(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkNetCDFCFReaderWrap::SphericalCoordinatesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SphericalCoordinatesOff();
}

void VtkNetCDFCFReaderWrap::SphericalCoordinatesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkNetCDFCFReaderWrap *wrapper = ObjectWrap::Unwrap<VtkNetCDFCFReaderWrap>(info.Holder());
	vtkNetCDFCFReader *native = (vtkNetCDFCFReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SphericalCoordinatesOn();
}

