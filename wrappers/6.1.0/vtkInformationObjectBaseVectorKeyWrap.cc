/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkInformationKeyWrap.h"
#include "vtkInformationObjectBaseVectorKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationObjectBaseVectorKeyWrap::ptpl;

VtkInformationObjectBaseVectorKeyWrap::VtkInformationObjectBaseVectorKeyWrap()
{ }

VtkInformationObjectBaseVectorKeyWrap::VtkInformationObjectBaseVectorKeyWrap(vtkSmartPointer<vtkInformationObjectBaseVectorKey> _native)
{ native = _native; }

VtkInformationObjectBaseVectorKeyWrap::~VtkInformationObjectBaseVectorKeyWrap()
{ }

void VtkInformationObjectBaseVectorKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationObjectBaseVectorKey").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationObjectBaseVectorKey").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationObjectBaseVectorKeyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationObjectBaseVectorKeyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationKeyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationKeyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationObjectBaseVectorKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Append", Append);
	Nan::SetPrototypeMethod(tpl, "append", Append);

	Nan::SetPrototypeMethod(tpl, "Clear", Clear);
	Nan::SetPrototypeMethod(tpl, "clear", Clear);

	Nan::SetPrototypeMethod(tpl, "Get", Get);
	Nan::SetPrototypeMethod(tpl, "get", Get);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Length", Length);
	Nan::SetPrototypeMethod(tpl, "length", Length);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Resize", Resize);
	Nan::SetPrototypeMethod(tpl, "resize", Resize);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Set", Set);
	Nan::SetPrototypeMethod(tpl, "set", Set);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Size", Size);
	Nan::SetPrototypeMethod(tpl, "size", Size);

#ifdef VTK_NODE_PLUS_VTKINFORMATIONOBJECTBASEVECTORKEYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINFORMATIONOBJECTBASEVECTORKEYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkInformationObjectBaseVectorKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInformationObjectBaseVectorKeyWrap::Append(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[1]))
		{
			VtkObjectBaseWrap *a1 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Append(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkObjectBase *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationObjectBaseVectorKeyWrap::Clear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Clear(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationObjectBaseVectorKeyWrap::Get(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkObjectBase * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Get(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			VtkObjectBaseWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkObjectBaseWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkObjectBaseWrap *w = new VtkObjectBaseWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationObjectBaseVectorKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationObjectBaseVectorKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
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

void VtkInformationObjectBaseVectorKeyWrap::Length(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Length(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationObjectBaseVectorKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	vtkInformationObjectBaseVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkInformationObjectBaseVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationObjectBaseVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationObjectBaseVectorKeyWrap *w = new VtkInformationObjectBaseVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationObjectBaseVectorKeyWrap::Resize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Resize(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationObjectBaseVectorKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationObjectBaseVectorKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkInformationObjectBaseVectorKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationObjectBaseVectorKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationObjectBaseVectorKeyWrap *w = new VtkInformationObjectBaseVectorKeyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationObjectBaseVectorKeyWrap::Set(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[1]))
		{
			VtkObjectBaseWrap *a1 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Set(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkObjectBase *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationObjectBaseVectorKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ShallowCopy(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationObjectBaseVectorKeyWrap::Size(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationObjectBaseVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationObjectBaseVectorKeyWrap>(info.Holder());
	vtkInformationObjectBaseVectorKey *native = (vtkInformationObjectBaseVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Size(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

