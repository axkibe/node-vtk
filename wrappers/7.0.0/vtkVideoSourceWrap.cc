/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkVideoSourceWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVideoSourceWrap::ptpl;

VtkVideoSourceWrap::VtkVideoSourceWrap()
{ }

VtkVideoSourceWrap::VtkVideoSourceWrap(vtkSmartPointer<vtkVideoSource> _native)
{ native = _native; }

VtkVideoSourceWrap::~VtkVideoSourceWrap()
{ }

void VtkVideoSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVideoSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VideoSource").ToLocalChecked(), ConstructorGetter);
}

void VtkVideoSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVideoSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVideoSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AutoAdvanceOff", AutoAdvanceOff);
	Nan::SetPrototypeMethod(tpl, "autoAdvanceOff", AutoAdvanceOff);

	Nan::SetPrototypeMethod(tpl, "AutoAdvanceOn", AutoAdvanceOn);
	Nan::SetPrototypeMethod(tpl, "autoAdvanceOn", AutoAdvanceOn);

	Nan::SetPrototypeMethod(tpl, "FastForward", FastForward);
	Nan::SetPrototypeMethod(tpl, "fastForward", FastForward);

	Nan::SetPrototypeMethod(tpl, "GetAutoAdvance", GetAutoAdvance);
	Nan::SetPrototypeMethod(tpl, "getAutoAdvance", GetAutoAdvance);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipRegion", GetClipRegion);
	Nan::SetPrototypeMethod(tpl, "getClipRegion", GetClipRegion);

	Nan::SetPrototypeMethod(tpl, "GetDataOrigin", GetDataOrigin);
	Nan::SetPrototypeMethod(tpl, "getDataOrigin", GetDataOrigin);

	Nan::SetPrototypeMethod(tpl, "GetDataSpacing", GetDataSpacing);
	Nan::SetPrototypeMethod(tpl, "getDataSpacing", GetDataSpacing);

	Nan::SetPrototypeMethod(tpl, "GetFrameBufferSize", GetFrameBufferSize);
	Nan::SetPrototypeMethod(tpl, "getFrameBufferSize", GetFrameBufferSize);

	Nan::SetPrototypeMethod(tpl, "GetFrameCount", GetFrameCount);
	Nan::SetPrototypeMethod(tpl, "getFrameCount", GetFrameCount);

	Nan::SetPrototypeMethod(tpl, "GetFrameIndex", GetFrameIndex);
	Nan::SetPrototypeMethod(tpl, "getFrameIndex", GetFrameIndex);

	Nan::SetPrototypeMethod(tpl, "GetFrameRate", GetFrameRate);
	Nan::SetPrototypeMethod(tpl, "getFrameRate", GetFrameRate);

	Nan::SetPrototypeMethod(tpl, "GetFrameSize", GetFrameSize);
	Nan::SetPrototypeMethod(tpl, "getFrameSize", GetFrameSize);

	Nan::SetPrototypeMethod(tpl, "GetFrameTimeStamp", GetFrameTimeStamp);
	Nan::SetPrototypeMethod(tpl, "getFrameTimeStamp", GetFrameTimeStamp);

	Nan::SetPrototypeMethod(tpl, "GetInitialized", GetInitialized);
	Nan::SetPrototypeMethod(tpl, "getInitialized", GetInitialized);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfOutputFrames", GetNumberOfOutputFrames);
	Nan::SetPrototypeMethod(tpl, "getNumberOfOutputFrames", GetNumberOfOutputFrames);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetOutputFormat", GetOutputFormat);
	Nan::SetPrototypeMethod(tpl, "getOutputFormat", GetOutputFormat);

	Nan::SetPrototypeMethod(tpl, "GetOutputWholeExtent", GetOutputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "getOutputWholeExtent", GetOutputWholeExtent);

	Nan::SetPrototypeMethod(tpl, "GetPlaying", GetPlaying);
	Nan::SetPrototypeMethod(tpl, "getPlaying", GetPlaying);

	Nan::SetPrototypeMethod(tpl, "GetRecording", GetRecording);
	Nan::SetPrototypeMethod(tpl, "getRecording", GetRecording);

	Nan::SetPrototypeMethod(tpl, "GetStartTimeStamp", GetStartTimeStamp);
	Nan::SetPrototypeMethod(tpl, "getStartTimeStamp", GetStartTimeStamp);

	Nan::SetPrototypeMethod(tpl, "Grab", Grab);
	Nan::SetPrototypeMethod(tpl, "grab", Grab);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "InternalGrab", InternalGrab);
	Nan::SetPrototypeMethod(tpl, "internalGrab", InternalGrab);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Play", Play);
	Nan::SetPrototypeMethod(tpl, "play", Play);

	Nan::SetPrototypeMethod(tpl, "Record", Record);
	Nan::SetPrototypeMethod(tpl, "record", Record);

	Nan::SetPrototypeMethod(tpl, "ReleaseSystemResources", ReleaseSystemResources);
	Nan::SetPrototypeMethod(tpl, "releaseSystemResources", ReleaseSystemResources);

	Nan::SetPrototypeMethod(tpl, "Rewind", Rewind);
	Nan::SetPrototypeMethod(tpl, "rewind", Rewind);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Seek", Seek);
	Nan::SetPrototypeMethod(tpl, "seek", Seek);

	Nan::SetPrototypeMethod(tpl, "SetAutoAdvance", SetAutoAdvance);
	Nan::SetPrototypeMethod(tpl, "setAutoAdvance", SetAutoAdvance);

	Nan::SetPrototypeMethod(tpl, "SetClipRegion", SetClipRegion);
	Nan::SetPrototypeMethod(tpl, "setClipRegion", SetClipRegion);

	Nan::SetPrototypeMethod(tpl, "SetDataOrigin", SetDataOrigin);
	Nan::SetPrototypeMethod(tpl, "setDataOrigin", SetDataOrigin);

	Nan::SetPrototypeMethod(tpl, "SetDataSpacing", SetDataSpacing);
	Nan::SetPrototypeMethod(tpl, "setDataSpacing", SetDataSpacing);

	Nan::SetPrototypeMethod(tpl, "SetFrameBufferSize", SetFrameBufferSize);
	Nan::SetPrototypeMethod(tpl, "setFrameBufferSize", SetFrameBufferSize);

	Nan::SetPrototypeMethod(tpl, "SetFrameCount", SetFrameCount);
	Nan::SetPrototypeMethod(tpl, "setFrameCount", SetFrameCount);

	Nan::SetPrototypeMethod(tpl, "SetFrameRate", SetFrameRate);
	Nan::SetPrototypeMethod(tpl, "setFrameRate", SetFrameRate);

	Nan::SetPrototypeMethod(tpl, "SetFrameSize", SetFrameSize);
	Nan::SetPrototypeMethod(tpl, "setFrameSize", SetFrameSize);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfOutputFrames", SetNumberOfOutputFrames);
	Nan::SetPrototypeMethod(tpl, "setNumberOfOutputFrames", SetNumberOfOutputFrames);

	Nan::SetPrototypeMethod(tpl, "SetOpacity", SetOpacity);
	Nan::SetPrototypeMethod(tpl, "setOpacity", SetOpacity);

	Nan::SetPrototypeMethod(tpl, "SetOutputFormat", SetOutputFormat);
	Nan::SetPrototypeMethod(tpl, "setOutputFormat", SetOutputFormat);

	Nan::SetPrototypeMethod(tpl, "SetOutputFormatToLuminance", SetOutputFormatToLuminance);
	Nan::SetPrototypeMethod(tpl, "setOutputFormatToLuminance", SetOutputFormatToLuminance);

	Nan::SetPrototypeMethod(tpl, "SetOutputFormatToRGB", SetOutputFormatToRGB);
	Nan::SetPrototypeMethod(tpl, "setOutputFormatToRGB", SetOutputFormatToRGB);

	Nan::SetPrototypeMethod(tpl, "SetOutputFormatToRGBA", SetOutputFormatToRGBA);
	Nan::SetPrototypeMethod(tpl, "setOutputFormatToRGBA", SetOutputFormatToRGBA);

	Nan::SetPrototypeMethod(tpl, "SetOutputWholeExtent", SetOutputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setOutputWholeExtent", SetOutputWholeExtent);

	Nan::SetPrototypeMethod(tpl, "SetStartTimeStamp", SetStartTimeStamp);
	Nan::SetPrototypeMethod(tpl, "setStartTimeStamp", SetStartTimeStamp);

	Nan::SetPrototypeMethod(tpl, "Stop", Stop);
	Nan::SetPrototypeMethod(tpl, "stop", Stop);

#ifdef VTK_NODE_PLUS_VTKVIDEOSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKVIDEOSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkVideoSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVideoSource> native = vtkSmartPointer<vtkVideoSource>::New();
		VtkVideoSourceWrap* obj = new VtkVideoSourceWrap(native);
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

void VtkVideoSourceWrap::AutoAdvanceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAdvanceOff();
}

void VtkVideoSourceWrap::AutoAdvanceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AutoAdvanceOn();
}

void VtkVideoSourceWrap::FastForward(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FastForward();
}

void VtkVideoSourceWrap::GetAutoAdvance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAutoAdvance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVideoSourceWrap::GetClipRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipRegion();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkVideoSourceWrap::GetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataOrigin();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkVideoSourceWrap::GetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSpacing();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkVideoSourceWrap::GetFrameBufferSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrameBufferSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetFrameCount(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrameCount();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetFrameIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrameIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetFrameRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrameRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetFrameSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrameSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkVideoSourceWrap::GetFrameTimeStamp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFrameTimeStamp(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrameTimeStamp();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetInitialized(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInitialized();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetNumberOfOutputFrames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfOutputFrames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOpacity();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetOutputFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputFormat();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputWholeExtent();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkVideoSourceWrap::GetPlaying(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaying();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetRecording(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRecording();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::GetStartTimeStamp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStartTimeStamp();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVideoSourceWrap::Grab(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Grab();
}

void VtkVideoSourceWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkVideoSourceWrap::InternalGrab(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InternalGrab();
}

void VtkVideoSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
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

void VtkVideoSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	vtkVideoSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVideoSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVideoSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVideoSourceWrap *w = new VtkVideoSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVideoSourceWrap::Play(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Play();
}

void VtkVideoSourceWrap::Record(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Record();
}

void VtkVideoSourceWrap::ReleaseSystemResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReleaseSystemResources();
}

void VtkVideoSourceWrap::Rewind(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Rewind();
}

void VtkVideoSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVideoSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkVideoSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVideoSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVideoSourceWrap *w = new VtkVideoSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::Seek(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Seek(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetAutoAdvance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAutoAdvance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetClipRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipRegion(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipRegion(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
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
							native->SetClipRegion(
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

void VtkVideoSourceWrap::SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataOrigin(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataOrigin(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetDataOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataSpacing(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataSpacing(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetDataSpacing(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetFrameBufferSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrameBufferSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetFrameCount(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrameCount(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetFrameRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrameRate(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetFrameSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrameSize(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrameSize(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetFrameSize(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetNumberOfOutputFrames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfOutputFrames(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOpacity(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetOutputFormat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputFormat(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::SetOutputFormatToLuminance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputFormatToLuminance();
}

void VtkVideoSourceWrap::SetOutputFormatToRGB(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputFormatToRGB();
}

void VtkVideoSourceWrap::SetOutputFormatToRGBA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputFormatToRGBA();
}

void VtkVideoSourceWrap::SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputWholeExtent(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputWholeExtent(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
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
							native->SetOutputWholeExtent(
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

void VtkVideoSourceWrap::SetStartTimeStamp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetStartTimeStamp(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVideoSourceWrap::Stop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVideoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVideoSourceWrap>(info.Holder());
	vtkVideoSource *native = (vtkVideoSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Stop();
}

