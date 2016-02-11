/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkExtractVOIWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractVOIWrap::ptpl;

VtkExtractVOIWrap::VtkExtractVOIWrap()
{ }

VtkExtractVOIWrap::VtkExtractVOIWrap(vtkSmartPointer<vtkExtractVOI> _native)
{ native = _native; }

VtkExtractVOIWrap::~VtkExtractVOIWrap()
{ }

void VtkExtractVOIWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractVOI").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractVOI").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractVOIWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractVOIWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractVOIWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetIncludeBoundary", GetIncludeBoundary);
	Nan::SetPrototypeMethod(tpl, "getIncludeBoundary", GetIncludeBoundary);

	Nan::SetPrototypeMethod(tpl, "GetSampleRate", GetSampleRate);
	Nan::SetPrototypeMethod(tpl, "getSampleRate", GetSampleRate);

	Nan::SetPrototypeMethod(tpl, "GetVOI", GetVOI);
	Nan::SetPrototypeMethod(tpl, "getVOI", GetVOI);

	Nan::SetPrototypeMethod(tpl, "IncludeBoundaryOff", IncludeBoundaryOff);
	Nan::SetPrototypeMethod(tpl, "includeBoundaryOff", IncludeBoundaryOff);

	Nan::SetPrototypeMethod(tpl, "IncludeBoundaryOn", IncludeBoundaryOn);
	Nan::SetPrototypeMethod(tpl, "includeBoundaryOn", IncludeBoundaryOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetIncludeBoundary", SetIncludeBoundary);
	Nan::SetPrototypeMethod(tpl, "setIncludeBoundary", SetIncludeBoundary);

	Nan::SetPrototypeMethod(tpl, "SetSampleRate", SetSampleRate);
	Nan::SetPrototypeMethod(tpl, "setSampleRate", SetSampleRate);

	Nan::SetPrototypeMethod(tpl, "SetVOI", SetVOI);
	Nan::SetPrototypeMethod(tpl, "setVOI", SetVOI);

	ptpl.Reset( tpl );
}

void VtkExtractVOIWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractVOI> native = vtkSmartPointer<vtkExtractVOI>::New();
		VtkExtractVOIWrap* obj = new VtkExtractVOIWrap(native);
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

void VtkExtractVOIWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractVOIWrap::GetIncludeBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIncludeBoundary();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractVOIWrap::GetSampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSampleRate();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkExtractVOIWrap::GetVOI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVOI();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkExtractVOIWrap::IncludeBoundaryOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeBoundaryOff();
}

void VtkExtractVOIWrap::IncludeBoundaryOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeBoundaryOn();
}

void VtkExtractVOIWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
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

void VtkExtractVOIWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
	vtkExtractVOI * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkExtractVOIWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractVOIWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractVOIWrap *w = new VtkExtractVOIWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractVOIWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractVOI * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkExtractVOIWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractVOIWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractVOIWrap *w = new VtkExtractVOIWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractVOIWrap::SetIncludeBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIncludeBoundary(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractVOIWrap::SetSampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
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
		native->SetSampleRate(
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
		native->SetSampleRate(
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
				native->SetSampleRate(
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

void VtkExtractVOIWrap::SetVOI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractVOIWrap *wrapper = ObjectWrap::Unwrap<VtkExtractVOIWrap>(info.Holder());
	vtkExtractVOI *native = (vtkExtractVOI *)wrapper->native.GetPointer();
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
		native->SetVOI(
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
		native->SetVOI(
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
							native->SetVOI(
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

