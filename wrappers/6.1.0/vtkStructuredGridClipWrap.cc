/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkStructuredGridClipWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredGridClipWrap::ptpl;

VtkStructuredGridClipWrap::VtkStructuredGridClipWrap()
{ }

VtkStructuredGridClipWrap::VtkStructuredGridClipWrap(vtkSmartPointer<vtkStructuredGridClip> _native)
{ native = _native; }

VtkStructuredGridClipWrap::~VtkStructuredGridClipWrap()
{ }

void VtkStructuredGridClipWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStructuredGridClip").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StructuredGridClip").ToLocalChecked(), ConstructorGetter);
}

void VtkStructuredGridClipWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStructuredGridClipWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStructuredGridClipWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClipDataOff", ClipDataOff);
	Nan::SetPrototypeMethod(tpl, "clipDataOff", ClipDataOff);

	Nan::SetPrototypeMethod(tpl, "ClipDataOn", ClipDataOn);
	Nan::SetPrototypeMethod(tpl, "clipDataOn", ClipDataOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipData", GetClipData);
	Nan::SetPrototypeMethod(tpl, "getClipData", GetClipData);

	Nan::SetPrototypeMethod(tpl, "GetOutputWholeExtent", GetOutputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "getOutputWholeExtent", GetOutputWholeExtent);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetOutputWholeExtent", ResetOutputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "resetOutputWholeExtent", ResetOutputWholeExtent);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClipData", SetClipData);
	Nan::SetPrototypeMethod(tpl, "setClipData", SetClipData);

	Nan::SetPrototypeMethod(tpl, "SetOutputWholeExtent", SetOutputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setOutputWholeExtent", SetOutputWholeExtent);

	ptpl.Reset( tpl );
}

void VtkStructuredGridClipWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGridClip> native = vtkSmartPointer<vtkStructuredGridClip>::New();
		VtkStructuredGridClipWrap* obj = new VtkStructuredGridClipWrap(native);
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

void VtkStructuredGridClipWrap::ClipDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClipDataOff();
}

void VtkStructuredGridClipWrap::ClipDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClipDataOn();
}

void VtkStructuredGridClipWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredGridClipWrap::GetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridClipWrap::GetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
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
		native->GetOutputWholeExtent(
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
		native->GetOutputWholeExtent(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridClipWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
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

void VtkStructuredGridClipWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	vtkStructuredGridClip * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStructuredGridClipWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridClipWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridClipWrap *w = new VtkStructuredGridClipWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridClipWrap::ResetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetOutputWholeExtent();
}

void VtkStructuredGridClipWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredGridClip * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStructuredGridClipWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredGridClipWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridClipWrap *w = new VtkStructuredGridClipWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridClipWrap::SetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridClipWrap::SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOutputWholeExtent(
				(int *)(a0->Buffer()->GetContents().Data()),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
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
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOutputWholeExtent(
				b0,
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
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
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOutputWholeExtent(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

