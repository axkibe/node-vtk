/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRectilinearGridAlgorithmWrap.h"
#include "vtkExtractRectilinearGridWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractRectilinearGridWrap::ptpl;

VtkExtractRectilinearGridWrap::VtkExtractRectilinearGridWrap()
{ }

VtkExtractRectilinearGridWrap::VtkExtractRectilinearGridWrap(vtkSmartPointer<vtkExtractRectilinearGrid> _native)
{ native = _native; }

VtkExtractRectilinearGridWrap::~VtkExtractRectilinearGridWrap()
{ }

void VtkExtractRectilinearGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractRectilinearGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractRectilinearGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractRectilinearGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractRectilinearGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRectilinearGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRectilinearGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractRectilinearGridWrap").ToLocalChecked());
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

void VtkExtractRectilinearGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractRectilinearGrid> native = vtkSmartPointer<vtkExtractRectilinearGrid>::New();
		VtkExtractRectilinearGridWrap* obj = new VtkExtractRectilinearGridWrap(native);
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

void VtkExtractRectilinearGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractRectilinearGridWrap::GetIncludeBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIncludeBoundary();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractRectilinearGridWrap::GetSampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
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

void VtkExtractRectilinearGridWrap::GetVOI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
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

void VtkExtractRectilinearGridWrap::IncludeBoundaryOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeBoundaryOff();
}

void VtkExtractRectilinearGridWrap::IncludeBoundaryOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeBoundaryOn();
}

void VtkExtractRectilinearGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
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

void VtkExtractRectilinearGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
	vtkExtractRectilinearGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkExtractRectilinearGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractRectilinearGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractRectilinearGridWrap *w = new VtkExtractRectilinearGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractRectilinearGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractRectilinearGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkExtractRectilinearGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractRectilinearGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractRectilinearGridWrap *w = new VtkExtractRectilinearGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractRectilinearGridWrap::SetIncludeBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
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

void VtkExtractRectilinearGridWrap::SetSampleRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
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

void VtkExtractRectilinearGridWrap::SetVOI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractRectilinearGridWrap *wrapper = ObjectWrap::Unwrap<VtkExtractRectilinearGridWrap>(info.Holder());
	vtkExtractRectilinearGrid *native = (vtkExtractRectilinearGrid *)wrapper->native.GetPointer();
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

