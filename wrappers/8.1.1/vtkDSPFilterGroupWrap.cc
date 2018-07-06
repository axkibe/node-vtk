/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkDSPFilterGroupWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDSPFilterDefinitionWrap.h"
#include "vtkFloatArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDSPFilterGroupWrap::ptpl;

VtkDSPFilterGroupWrap::VtkDSPFilterGroupWrap()
{ }

VtkDSPFilterGroupWrap::VtkDSPFilterGroupWrap(vtkSmartPointer<vtkDSPFilterGroup> _native)
{ native = _native; }

VtkDSPFilterGroupWrap::~VtkDSPFilterGroupWrap()
{ }

void VtkDSPFilterGroupWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDSPFilterGroup").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DSPFilterGroup").ToLocalChecked(), ConstructorGetter);
}

void VtkDSPFilterGroupWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDSPFilterGroupWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDSPFilterGroupWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddFilter", AddFilter);
	Nan::SetPrototypeMethod(tpl, "addFilter", AddFilter);

	Nan::SetPrototypeMethod(tpl, "AddInputVariableInstance", AddInputVariableInstance);
	Nan::SetPrototypeMethod(tpl, "addInputVariableInstance", AddInputVariableInstance);

	Nan::SetPrototypeMethod(tpl, "Copy", Copy);
	Nan::SetPrototypeMethod(tpl, "copy", Copy);

	Nan::SetPrototypeMethod(tpl, "GetCachedInput", GetCachedInput);
	Nan::SetPrototypeMethod(tpl, "getCachedInput", GetCachedInput);

	Nan::SetPrototypeMethod(tpl, "GetCachedOutput", GetCachedOutput);
	Nan::SetPrototypeMethod(tpl, "getCachedOutput", GetCachedOutput);

	Nan::SetPrototypeMethod(tpl, "GetFilter", GetFilter);
	Nan::SetPrototypeMethod(tpl, "getFilter", GetFilter);

	Nan::SetPrototypeMethod(tpl, "GetInputVariableName", GetInputVariableName);
	Nan::SetPrototypeMethod(tpl, "getInputVariableName", GetInputVariableName);

	Nan::SetPrototypeMethod(tpl, "GetNumFilters", GetNumFilters);
	Nan::SetPrototypeMethod(tpl, "getNumFilters", GetNumFilters);

	Nan::SetPrototypeMethod(tpl, "IsThisInputVariableInstanceCached", IsThisInputVariableInstanceCached);
	Nan::SetPrototypeMethod(tpl, "isThisInputVariableInstanceCached", IsThisInputVariableInstanceCached);

	Nan::SetPrototypeMethod(tpl, "IsThisInputVariableInstanceNeeded", IsThisInputVariableInstanceNeeded);
	Nan::SetPrototypeMethod(tpl, "isThisInputVariableInstanceNeeded", IsThisInputVariableInstanceNeeded);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveFilter", RemoveFilter);
	Nan::SetPrototypeMethod(tpl, "removeFilter", RemoveFilter);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKDSPFILTERGROUPWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDSPFILTERGROUPWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDSPFilterGroupWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDSPFilterGroup> native = vtkSmartPointer<vtkDSPFilterGroup>::New();
		VtkDSPFilterGroupWrap* obj = new VtkDSPFilterGroupWrap(native);
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

void VtkDSPFilterGroupWrap::AddFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDSPFilterDefinitionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDSPFilterDefinitionWrap *a0 = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddFilter(
			(vtkDSPFilterDefinition *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::AddInputVariableInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkFloatArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkFloatArrayWrap *a2 = ObjectWrap::Unwrap<VtkFloatArrayWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->AddInputVariableInstance(
					*a0,
					info[1]->Int32Value(),
					(vtkFloatArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::Copy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDSPFilterGroupWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDSPFilterGroupWrap *a0 = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Copy(
			(vtkDSPFilterGroup *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::GetCachedInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkFloatArray * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetCachedInput(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			VtkFloatArrayWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkFloatArrayWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkFloatArrayWrap *w = new VtkFloatArrayWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::GetCachedOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkFloatArray * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetCachedOutput(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			VtkFloatArrayWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkFloatArrayWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkFloatArrayWrap *w = new VtkFloatArrayWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::GetFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDSPFilterDefinition * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFilter(
			info[0]->Int32Value()
		);
		VtkDSPFilterDefinitionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDSPFilterDefinitionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDSPFilterDefinitionWrap *w = new VtkDSPFilterDefinitionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::GetInputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInputVariableName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::GetNumFilters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumFilters();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDSPFilterGroupWrap::IsThisInputVariableInstanceCached(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->IsThisInputVariableInstanceCached(
				*a0,
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::IsThisInputVariableInstanceNeeded(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				bool r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->IsThisInputVariableInstanceNeeded(
					*a0,
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	vtkDSPFilterGroup * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDSPFilterGroupWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDSPFilterGroupWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDSPFilterGroupWrap *w = new VtkDSPFilterGroupWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDSPFilterGroupWrap::RemoveFilter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveFilter(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterGroupWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterGroupWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterGroupWrap>(info.Holder());
	vtkDSPFilterGroup *native = (vtkDSPFilterGroup *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDSPFilterGroup * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDSPFilterGroupWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDSPFilterGroupWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDSPFilterGroupWrap *w = new VtkDSPFilterGroupWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
