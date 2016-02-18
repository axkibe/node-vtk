/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkSLACReaderWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDoubleArrayWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationObjectBaseKeyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSLACReaderWrap::ptpl;

VtkSLACReaderWrap::VtkSLACReaderWrap()
{ }

VtkSLACReaderWrap::VtkSLACReaderWrap(vtkSmartPointer<vtkSLACReader> _native)
{ native = _native; }

VtkSLACReaderWrap::~VtkSLACReaderWrap()
{ }

void VtkSLACReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSLACReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SLACReader").ToLocalChecked(), ConstructorGetter);
}

void VtkSLACReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSLACReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSLACReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddModeFileName", AddModeFileName);
	Nan::SetPrototypeMethod(tpl, "addModeFileName", AddModeFileName);

	Nan::SetPrototypeMethod(tpl, "CanReadFile", CanReadFile);
	Nan::SetPrototypeMethod(tpl, "canReadFile", CanReadFile);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFrequencyScales", GetFrequencyScales);
	Nan::SetPrototypeMethod(tpl, "getFrequencyScales", GetFrequencyScales);

	Nan::SetPrototypeMethod(tpl, "GetMeshFileName", GetMeshFileName);
	Nan::SetPrototypeMethod(tpl, "getMeshFileName", GetMeshFileName);

	Nan::SetPrototypeMethod(tpl, "GetModeFileName", GetModeFileName);
	Nan::SetPrototypeMethod(tpl, "getModeFileName", GetModeFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfModeFileNames", GetNumberOfModeFileNames);
	Nan::SetPrototypeMethod(tpl, "getNumberOfModeFileNames", GetNumberOfModeFileNames);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfVariableArrays", GetNumberOfVariableArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfVariableArrays", GetNumberOfVariableArrays);

	Nan::SetPrototypeMethod(tpl, "GetPhaseShifts", GetPhaseShifts);
	Nan::SetPrototypeMethod(tpl, "getPhaseShifts", GetPhaseShifts);

	Nan::SetPrototypeMethod(tpl, "GetReadExternalSurface", GetReadExternalSurface);
	Nan::SetPrototypeMethod(tpl, "getReadExternalSurface", GetReadExternalSurface);

	Nan::SetPrototypeMethod(tpl, "GetReadInternalVolume", GetReadInternalVolume);
	Nan::SetPrototypeMethod(tpl, "getReadInternalVolume", GetReadInternalVolume);

	Nan::SetPrototypeMethod(tpl, "GetReadMidpoints", GetReadMidpoints);
	Nan::SetPrototypeMethod(tpl, "getReadMidpoints", GetReadMidpoints);

	Nan::SetPrototypeMethod(tpl, "GetVariableArrayName", GetVariableArrayName);
	Nan::SetPrototypeMethod(tpl, "getVariableArrayName", GetVariableArrayName);

	Nan::SetPrototypeMethod(tpl, "GetVariableArrayStatus", GetVariableArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getVariableArrayStatus", GetVariableArrayStatus);

	Nan::SetPrototypeMethod(tpl, "IS_EXTERNAL_SURFACE", IS_EXTERNAL_SURFACE);

	Nan::SetPrototypeMethod(tpl, "IS_INTERNAL_VOLUME", IS_INTERNAL_VOLUME);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "POINTS", POINTS);

	Nan::SetPrototypeMethod(tpl, "POINT_DATA", POINT_DATA);

	Nan::SetPrototypeMethod(tpl, "ReadExternalSurfaceOff", ReadExternalSurfaceOff);
	Nan::SetPrototypeMethod(tpl, "readExternalSurfaceOff", ReadExternalSurfaceOff);

	Nan::SetPrototypeMethod(tpl, "ReadExternalSurfaceOn", ReadExternalSurfaceOn);
	Nan::SetPrototypeMethod(tpl, "readExternalSurfaceOn", ReadExternalSurfaceOn);

	Nan::SetPrototypeMethod(tpl, "ReadInternalVolumeOff", ReadInternalVolumeOff);
	Nan::SetPrototypeMethod(tpl, "readInternalVolumeOff", ReadInternalVolumeOff);

	Nan::SetPrototypeMethod(tpl, "ReadInternalVolumeOn", ReadInternalVolumeOn);
	Nan::SetPrototypeMethod(tpl, "readInternalVolumeOn", ReadInternalVolumeOn);

	Nan::SetPrototypeMethod(tpl, "ReadMidpointsOff", ReadMidpointsOff);
	Nan::SetPrototypeMethod(tpl, "readMidpointsOff", ReadMidpointsOff);

	Nan::SetPrototypeMethod(tpl, "ReadMidpointsOn", ReadMidpointsOn);
	Nan::SetPrototypeMethod(tpl, "readMidpointsOn", ReadMidpointsOn);

	Nan::SetPrototypeMethod(tpl, "RemoveAllModeFileNames", RemoveAllModeFileNames);
	Nan::SetPrototypeMethod(tpl, "removeAllModeFileNames", RemoveAllModeFileNames);

	Nan::SetPrototypeMethod(tpl, "ResetFrequencyScales", ResetFrequencyScales);
	Nan::SetPrototypeMethod(tpl, "resetFrequencyScales", ResetFrequencyScales);

	Nan::SetPrototypeMethod(tpl, "ResetPhaseShifts", ResetPhaseShifts);
	Nan::SetPrototypeMethod(tpl, "resetPhaseShifts", ResetPhaseShifts);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFrequencyScale", SetFrequencyScale);
	Nan::SetPrototypeMethod(tpl, "setFrequencyScale", SetFrequencyScale);

	Nan::SetPrototypeMethod(tpl, "SetMeshFileName", SetMeshFileName);
	Nan::SetPrototypeMethod(tpl, "setMeshFileName", SetMeshFileName);

	Nan::SetPrototypeMethod(tpl, "SetPhaseShift", SetPhaseShift);
	Nan::SetPrototypeMethod(tpl, "setPhaseShift", SetPhaseShift);

	Nan::SetPrototypeMethod(tpl, "SetReadExternalSurface", SetReadExternalSurface);
	Nan::SetPrototypeMethod(tpl, "setReadExternalSurface", SetReadExternalSurface);

	Nan::SetPrototypeMethod(tpl, "SetReadInternalVolume", SetReadInternalVolume);
	Nan::SetPrototypeMethod(tpl, "setReadInternalVolume", SetReadInternalVolume);

	Nan::SetPrototypeMethod(tpl, "SetReadMidpoints", SetReadMidpoints);
	Nan::SetPrototypeMethod(tpl, "setReadMidpoints", SetReadMidpoints);

	Nan::SetPrototypeMethod(tpl, "SetVariableArrayStatus", SetVariableArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setVariableArrayStatus", SetVariableArrayStatus);

#ifdef VTK_NODE_PLUS_VTKSLACREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSLACREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSLACReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSLACReader> native = vtkSmartPointer<vtkSLACReader>::New();
		VtkSLACReaderWrap* obj = new VtkSLACReaderWrap(native);
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

void VtkSLACReaderWrap::AddModeFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddModeFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::CanReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
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

void VtkSLACReaderWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSLACReaderWrap::GetFrequencyScales(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	vtkDoubleArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrequencyScales();
	VtkDoubleArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDoubleArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDoubleArrayWrap *w = new VtkDoubleArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSLACReaderWrap::GetMeshFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMeshFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSLACReaderWrap::GetModeFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetModeFileName(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::GetNumberOfModeFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfModeFileNames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSLACReaderWrap::GetNumberOfVariableArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfVariableArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSLACReaderWrap::GetPhaseShifts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	vtkDoubleArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhaseShifts();
	VtkDoubleArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDoubleArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDoubleArrayWrap *w = new VtkDoubleArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSLACReaderWrap::GetReadExternalSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadExternalSurface();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSLACReaderWrap::GetReadInternalVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadInternalVolume();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSLACReaderWrap::GetReadMidpoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReadMidpoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSLACReaderWrap::GetVariableArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVariableArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::GetVariableArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVariableArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::IS_EXTERNAL_SURFACE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IS_EXTERNAL_SURFACE();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSLACReaderWrap::IS_INTERNAL_VOLUME(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IS_INTERNAL_VOLUME();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSLACReaderWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
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

void VtkSLACReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	vtkSLACReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSLACReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSLACReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSLACReaderWrap *w = new VtkSLACReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSLACReaderWrap::POINTS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	vtkInformationObjectBaseKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->POINTS();
	VtkInformationObjectBaseKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationObjectBaseKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationObjectBaseKeyWrap *w = new VtkInformationObjectBaseKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSLACReaderWrap::POINT_DATA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	vtkInformationObjectBaseKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->POINT_DATA();
	VtkInformationObjectBaseKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationObjectBaseKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationObjectBaseKeyWrap *w = new VtkInformationObjectBaseKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSLACReaderWrap::ReadExternalSurfaceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadExternalSurfaceOff();
}

void VtkSLACReaderWrap::ReadExternalSurfaceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadExternalSurfaceOn();
}

void VtkSLACReaderWrap::ReadInternalVolumeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadInternalVolumeOff();
}

void VtkSLACReaderWrap::ReadInternalVolumeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadInternalVolumeOn();
}

void VtkSLACReaderWrap::ReadMidpointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadMidpointsOff();
}

void VtkSLACReaderWrap::ReadMidpointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReadMidpointsOn();
}

void VtkSLACReaderWrap::RemoveAllModeFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllModeFileNames();
}

void VtkSLACReaderWrap::ResetFrequencyScales(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetFrequencyScales();
}

void VtkSLACReaderWrap::ResetPhaseShifts(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetPhaseShifts();
}

void VtkSLACReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSLACReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSLACReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSLACReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSLACReaderWrap *w = new VtkSLACReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::SetFrequencyScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetFrequencyScale(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::SetMeshFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMeshFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::SetPhaseShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPhaseShift(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::SetReadExternalSurface(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadExternalSurface(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::SetReadInternalVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadInternalVolume(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::SetReadMidpoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReadMidpoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSLACReaderWrap::SetVariableArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSLACReaderWrap *wrapper = ObjectWrap::Unwrap<VtkSLACReaderWrap>(info.Holder());
	vtkSLACReader *native = (vtkSLACReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetVariableArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

