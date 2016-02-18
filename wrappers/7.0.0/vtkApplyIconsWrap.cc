/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkApplyIconsWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkApplyIconsWrap::ptpl;

VtkApplyIconsWrap::VtkApplyIconsWrap()
{ }

VtkApplyIconsWrap::VtkApplyIconsWrap(vtkSmartPointer<vtkApplyIcons> _native)
{ native = _native; }

VtkApplyIconsWrap::~VtkApplyIconsWrap()
{ }

void VtkApplyIconsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkApplyIcons").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ApplyIcons").ToLocalChecked(), ConstructorGetter);
}

void VtkApplyIconsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkApplyIconsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkApplyIconsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClearAllIconTypes", ClearAllIconTypes);
	Nan::SetPrototypeMethod(tpl, "clearAllIconTypes", ClearAllIconTypes);

	Nan::SetPrototypeMethod(tpl, "GetAttributeType", GetAttributeType);
	Nan::SetPrototypeMethod(tpl, "getAttributeType", GetAttributeType);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultIcon", GetDefaultIcon);
	Nan::SetPrototypeMethod(tpl, "getDefaultIcon", GetDefaultIcon);

	Nan::SetPrototypeMethod(tpl, "GetIconOutputArrayName", GetIconOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "getIconOutputArrayName", GetIconOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "GetSelectedIcon", GetSelectedIcon);
	Nan::SetPrototypeMethod(tpl, "getSelectedIcon", GetSelectedIcon);

	Nan::SetPrototypeMethod(tpl, "GetSelectionMode", GetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "getSelectionMode", GetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "GetUseLookupTable", GetUseLookupTable);
	Nan::SetPrototypeMethod(tpl, "getUseLookupTable", GetUseLookupTable);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAttributeType", SetAttributeType);
	Nan::SetPrototypeMethod(tpl, "setAttributeType", SetAttributeType);

	Nan::SetPrototypeMethod(tpl, "SetDefaultIcon", SetDefaultIcon);
	Nan::SetPrototypeMethod(tpl, "setDefaultIcon", SetDefaultIcon);

	Nan::SetPrototypeMethod(tpl, "SetIconOutputArrayName", SetIconOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "setIconOutputArrayName", SetIconOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "SetIconType", SetIconType);
	Nan::SetPrototypeMethod(tpl, "setIconType", SetIconType);

	Nan::SetPrototypeMethod(tpl, "SetSelectedIcon", SetSelectedIcon);
	Nan::SetPrototypeMethod(tpl, "setSelectedIcon", SetSelectedIcon);

	Nan::SetPrototypeMethod(tpl, "SetSelectionMode", SetSelectionMode);
	Nan::SetPrototypeMethod(tpl, "setSelectionMode", SetSelectionMode);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToAnnotationIcon", SetSelectionModeToAnnotationIcon);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToAnnotationIcon", SetSelectionModeToAnnotationIcon);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToIgnoreSelection", SetSelectionModeToIgnoreSelection);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToIgnoreSelection", SetSelectionModeToIgnoreSelection);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToSelectedIcon", SetSelectionModeToSelectedIcon);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToSelectedIcon", SetSelectionModeToSelectedIcon);

	Nan::SetPrototypeMethod(tpl, "SetSelectionModeToSelectedOffset", SetSelectionModeToSelectedOffset);
	Nan::SetPrototypeMethod(tpl, "setSelectionModeToSelectedOffset", SetSelectionModeToSelectedOffset);

	Nan::SetPrototypeMethod(tpl, "SetUseLookupTable", SetUseLookupTable);
	Nan::SetPrototypeMethod(tpl, "setUseLookupTable", SetUseLookupTable);

	Nan::SetPrototypeMethod(tpl, "UseLookupTableOff", UseLookupTableOff);
	Nan::SetPrototypeMethod(tpl, "useLookupTableOff", UseLookupTableOff);

	Nan::SetPrototypeMethod(tpl, "UseLookupTableOn", UseLookupTableOn);
	Nan::SetPrototypeMethod(tpl, "useLookupTableOn", UseLookupTableOn);

#ifdef VTK_NODE_PLUS_VTKAPPLYICONSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAPPLYICONSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkApplyIconsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkApplyIcons> native = vtkSmartPointer<vtkApplyIcons>::New();
		VtkApplyIconsWrap* obj = new VtkApplyIconsWrap(native);
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

void VtkApplyIconsWrap::ClearAllIconTypes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearAllIconTypes();
}

void VtkApplyIconsWrap::GetAttributeType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAttributeType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyIconsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkApplyIconsWrap::GetDefaultIcon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultIcon();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyIconsWrap::GetIconOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIconOutputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkApplyIconsWrap::GetSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectedIcon();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyIconsWrap::GetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyIconsWrap::GetUseLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseLookupTable();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkApplyIconsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
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

void VtkApplyIconsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	vtkApplyIcons * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkApplyIconsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkApplyIconsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkApplyIconsWrap *w = new VtkApplyIconsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkApplyIconsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkApplyIcons * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkApplyIconsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkApplyIconsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkApplyIconsWrap *w = new VtkApplyIconsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyIconsWrap::SetAttributeType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAttributeType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyIconsWrap::SetDefaultIcon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDefaultIcon(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyIconsWrap::SetIconOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIconOutputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyIconsWrap::SetIconType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
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
			native->SetIconType(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetIconType(
				info[0]->NumberValue(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyIconsWrap::SetSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectedIcon(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyIconsWrap::SetSelectionMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyIconsWrap::SetSelectionModeToAnnotationIcon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToAnnotationIcon();
}

void VtkApplyIconsWrap::SetSelectionModeToIgnoreSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToIgnoreSelection();
}

void VtkApplyIconsWrap::SetSelectionModeToSelectedIcon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToSelectedIcon();
}

void VtkApplyIconsWrap::SetSelectionModeToSelectedOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetSelectionModeToSelectedOffset();
}

void VtkApplyIconsWrap::SetUseLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseLookupTable(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkApplyIconsWrap::UseLookupTableOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseLookupTableOff();
}

void VtkApplyIconsWrap::UseLookupTableOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkApplyIconsWrap *wrapper = ObjectWrap::Unwrap<VtkApplyIconsWrap>(info.Holder());
	vtkApplyIcons *native = (vtkApplyIcons *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseLookupTableOn();
}

