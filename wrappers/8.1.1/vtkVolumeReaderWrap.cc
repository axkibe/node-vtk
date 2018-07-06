/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkVolumeReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeReaderWrap::ptpl;

VtkVolumeReaderWrap::VtkVolumeReaderWrap()
{ }

VtkVolumeReaderWrap::VtkVolumeReaderWrap(vtkSmartPointer<vtkVolumeReader> _native)
{ native = _native; }

VtkVolumeReaderWrap::~VtkVolumeReaderWrap()
{ }

void VtkVolumeReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolumeReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VolumeReader").ToLocalChecked(), ConstructorGetter);
}

void VtkVolumeReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolumeReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolumeReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDataOrigin", GetDataOrigin);
	Nan::SetPrototypeMethod(tpl, "getDataOrigin", GetDataOrigin);

	Nan::SetPrototypeMethod(tpl, "GetDataSpacing", GetDataSpacing);
	Nan::SetPrototypeMethod(tpl, "getDataSpacing", GetDataSpacing);

	Nan::SetPrototypeMethod(tpl, "GetFilePattern", GetFilePattern);
	Nan::SetPrototypeMethod(tpl, "getFilePattern", GetFilePattern);

	Nan::SetPrototypeMethod(tpl, "GetFilePrefix", GetFilePrefix);
	Nan::SetPrototypeMethod(tpl, "getFilePrefix", GetFilePrefix);

	Nan::SetPrototypeMethod(tpl, "GetImageRange", GetImageRange);
	Nan::SetPrototypeMethod(tpl, "getImageRange", GetImageRange);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataOrigin", SetDataOrigin);
	Nan::SetPrototypeMethod(tpl, "setDataOrigin", SetDataOrigin);

	Nan::SetPrototypeMethod(tpl, "SetDataSpacing", SetDataSpacing);
	Nan::SetPrototypeMethod(tpl, "setDataSpacing", SetDataSpacing);

	Nan::SetPrototypeMethod(tpl, "SetFilePattern", SetFilePattern);
	Nan::SetPrototypeMethod(tpl, "setFilePattern", SetFilePattern);

	Nan::SetPrototypeMethod(tpl, "SetFilePrefix", SetFilePrefix);
	Nan::SetPrototypeMethod(tpl, "setFilePrefix", SetFilePrefix);

	Nan::SetPrototypeMethod(tpl, "SetImageRange", SetImageRange);
	Nan::SetPrototypeMethod(tpl, "setImageRange", SetImageRange);

#ifdef VTK_NODE_PLUS_VTKVOLUMEREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKVOLUMEREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkVolumeReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkVolumeReaderWrap::GetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
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

void VtkVolumeReaderWrap::GetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
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

void VtkVolumeReaderWrap::GetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilePattern();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeReaderWrap::GetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilePrefix();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeReaderWrap::GetImageRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkVolumeReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	vtkVolumeReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkVolumeReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumeReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeReaderWrap *w = new VtkVolumeReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkVolumeReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkVolumeReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVolumeReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeReaderWrap *w = new VtkVolumeReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
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

void VtkVolumeReaderWrap::SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
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

void VtkVolumeReaderWrap::SetFilePattern(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilePattern(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::SetFilePrefix(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilePrefix(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeReaderWrap::SetImageRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeReaderWrap>(info.Holder());
	vtkVolumeReader *native = (vtkVolumeReader *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageRange(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->SetImageRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetImageRange(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

