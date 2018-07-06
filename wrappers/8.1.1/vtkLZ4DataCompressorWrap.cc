/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataCompressorWrap.h"
#include "vtkLZ4DataCompressorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLZ4DataCompressorWrap::ptpl;

VtkLZ4DataCompressorWrap::VtkLZ4DataCompressorWrap()
{ }

VtkLZ4DataCompressorWrap::VtkLZ4DataCompressorWrap(vtkSmartPointer<vtkLZ4DataCompressor> _native)
{ native = _native; }

VtkLZ4DataCompressorWrap::~VtkLZ4DataCompressorWrap()
{ }

void VtkLZ4DataCompressorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLZ4DataCompressor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LZ4DataCompressor").ToLocalChecked(), ConstructorGetter);
}

void VtkLZ4DataCompressorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLZ4DataCompressorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataCompressorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataCompressorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLZ4DataCompressorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAccelerationLevel", GetAccelerationLevel);
	Nan::SetPrototypeMethod(tpl, "getAccelerationLevel", GetAccelerationLevel);

	Nan::SetPrototypeMethod(tpl, "GetAccelerationLevelMaxValue", GetAccelerationLevelMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAccelerationLevelMaxValue", GetAccelerationLevelMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAccelerationLevelMinValue", GetAccelerationLevelMinValue);
	Nan::SetPrototypeMethod(tpl, "getAccelerationLevelMinValue", GetAccelerationLevelMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAccelerationLevel", SetAccelerationLevel);
	Nan::SetPrototypeMethod(tpl, "setAccelerationLevel", SetAccelerationLevel);

#ifdef VTK_NODE_PLUS_VTKLZ4DATACOMPRESSORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKLZ4DATACOMPRESSORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkLZ4DataCompressorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLZ4DataCompressor> native = vtkSmartPointer<vtkLZ4DataCompressor>::New();
		VtkLZ4DataCompressorWrap* obj = new VtkLZ4DataCompressorWrap(native);
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

void VtkLZ4DataCompressorWrap::GetAccelerationLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLZ4DataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkLZ4DataCompressorWrap>(info.Holder());
	vtkLZ4DataCompressor *native = (vtkLZ4DataCompressor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccelerationLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLZ4DataCompressorWrap::GetAccelerationLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLZ4DataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkLZ4DataCompressorWrap>(info.Holder());
	vtkLZ4DataCompressor *native = (vtkLZ4DataCompressor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccelerationLevelMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLZ4DataCompressorWrap::GetAccelerationLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLZ4DataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkLZ4DataCompressorWrap>(info.Holder());
	vtkLZ4DataCompressor *native = (vtkLZ4DataCompressor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAccelerationLevelMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLZ4DataCompressorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLZ4DataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkLZ4DataCompressorWrap>(info.Holder());
	vtkLZ4DataCompressor *native = (vtkLZ4DataCompressor *)wrapper->native.GetPointer();
	vtkLZ4DataCompressor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkLZ4DataCompressorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLZ4DataCompressorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLZ4DataCompressorWrap *w = new VtkLZ4DataCompressorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLZ4DataCompressorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLZ4DataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkLZ4DataCompressorWrap>(info.Holder());
	vtkLZ4DataCompressor *native = (vtkLZ4DataCompressor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkLZ4DataCompressor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkLZ4DataCompressorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLZ4DataCompressorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLZ4DataCompressorWrap *w = new VtkLZ4DataCompressorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLZ4DataCompressorWrap::SetAccelerationLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLZ4DataCompressorWrap *wrapper = ObjectWrap::Unwrap<VtkLZ4DataCompressorWrap>(info.Holder());
	vtkLZ4DataCompressor *native = (vtkLZ4DataCompressor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAccelerationLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
