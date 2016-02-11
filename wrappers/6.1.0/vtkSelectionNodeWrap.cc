/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkSelectionNodeWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "vtkDataSetAttributesWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationDoubleKeyWrap.h"
#include "vtkInformationObjectBaseKeyWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSelectionNodeWrap::ptpl;

VtkSelectionNodeWrap::VtkSelectionNodeWrap()
{ }

VtkSelectionNodeWrap::VtkSelectionNodeWrap(vtkSmartPointer<vtkSelectionNode> _native)
{ native = _native; }

VtkSelectionNodeWrap::~VtkSelectionNodeWrap()
{ }

void VtkSelectionNodeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSelectionNode").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SelectionNode").ToLocalChecked(), ConstructorGetter);
}

void VtkSelectionNodeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSelectionNodeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSelectionNodeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "COMPONENT_NUMBER", COMPONENT_NUMBER);

	Nan::SetPrototypeMethod(tpl, "COMPOSITE_INDEX", COMPOSITE_INDEX);

	Nan::SetPrototypeMethod(tpl, "CONTAINING_CELLS", CONTAINING_CELLS);

	Nan::SetPrototypeMethod(tpl, "CONTENT_TYPE", CONTENT_TYPE);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "EPSILON", EPSILON);

	Nan::SetPrototypeMethod(tpl, "EqualProperties", EqualProperties);
	Nan::SetPrototypeMethod(tpl, "equalProperties", EqualProperties);

	Nan::SetPrototypeMethod(tpl, "FIELD_TYPE", FIELD_TYPE);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetContentType", GetContentType);
	Nan::SetPrototypeMethod(tpl, "getContentType", GetContentType);

	Nan::SetPrototypeMethod(tpl, "GetFieldType", GetFieldType);
	Nan::SetPrototypeMethod(tpl, "getFieldType", GetFieldType);

	Nan::SetPrototypeMethod(tpl, "GetProperties", GetProperties);
	Nan::SetPrototypeMethod(tpl, "getProperties", GetProperties);

	Nan::SetPrototypeMethod(tpl, "GetQueryString", GetQueryString);
	Nan::SetPrototypeMethod(tpl, "getQueryString", GetQueryString);

	Nan::SetPrototypeMethod(tpl, "GetSelectionData", GetSelectionData);
	Nan::SetPrototypeMethod(tpl, "getSelectionData", GetSelectionData);

	Nan::SetPrototypeMethod(tpl, "GetSelectionList", GetSelectionList);
	Nan::SetPrototypeMethod(tpl, "getSelectionList", GetSelectionList);

	Nan::SetPrototypeMethod(tpl, "HIERARCHICAL_INDEX", HIERARCHICAL_INDEX);

	Nan::SetPrototypeMethod(tpl, "HIERARCHICAL_LEVEL", HIERARCHICAL_LEVEL);

	Nan::SetPrototypeMethod(tpl, "INDEXED_VERTICES", INDEXED_VERTICES);

	Nan::SetPrototypeMethod(tpl, "INVERSE", INVERSE);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PIXEL_COUNT", PIXEL_COUNT);

	Nan::SetPrototypeMethod(tpl, "PROCESS_ID", PROCESS_ID);

	Nan::SetPrototypeMethod(tpl, "PROP", PROP);

	Nan::SetPrototypeMethod(tpl, "PROP_ID", PROP_ID);

	Nan::SetPrototypeMethod(tpl, "SOURCE", SOURCE);

	Nan::SetPrototypeMethod(tpl, "SOURCE_ID", SOURCE_ID);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetContentType", SetContentType);
	Nan::SetPrototypeMethod(tpl, "setContentType", SetContentType);

	Nan::SetPrototypeMethod(tpl, "SetFieldType", SetFieldType);
	Nan::SetPrototypeMethod(tpl, "setFieldType", SetFieldType);

	Nan::SetPrototypeMethod(tpl, "SetQueryString", SetQueryString);
	Nan::SetPrototypeMethod(tpl, "setQueryString", SetQueryString);

	Nan::SetPrototypeMethod(tpl, "SetSelectionData", SetSelectionData);
	Nan::SetPrototypeMethod(tpl, "setSelectionData", SetSelectionData);

	Nan::SetPrototypeMethod(tpl, "SetSelectionList", SetSelectionList);
	Nan::SetPrototypeMethod(tpl, "setSelectionList", SetSelectionList);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "SubtractSelectionList", SubtractSelectionList);
	Nan::SetPrototypeMethod(tpl, "subtractSelectionList", SubtractSelectionList);

	Nan::SetPrototypeMethod(tpl, "UnionSelectionList", UnionSelectionList);
	Nan::SetPrototypeMethod(tpl, "unionSelectionList", UnionSelectionList);

	ptpl.Reset( tpl );
}

void VtkSelectionNodeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSelectionNode> native = vtkSmartPointer<vtkSelectionNode>::New();
		VtkSelectionNodeWrap* obj = new VtkSelectionNodeWrap(native);
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

void VtkSelectionNodeWrap::COMPONENT_NUMBER(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->COMPONENT_NUMBER();
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

void VtkSelectionNodeWrap::COMPOSITE_INDEX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->COMPOSITE_INDEX();
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

void VtkSelectionNodeWrap::CONTAINING_CELLS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CONTAINING_CELLS();
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

void VtkSelectionNodeWrap::CONTENT_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CONTENT_TYPE();
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

void VtkSelectionNodeWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkSelectionNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::EPSILON(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationDoubleKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->EPSILON();
	VtkInformationDoubleKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleKeyWrap *w = new VtkInformationDoubleKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectionNodeWrap::EqualProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsBoolean())
		{
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->EqualProperties(
				(vtkSelectionNode *) a0->native.GetPointer(),
				info[1]->BooleanValue()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::FIELD_TYPE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->FIELD_TYPE();
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

void VtkSelectionNodeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectionNodeWrap::GetContentType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContentType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionNodeWrap::GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionNodeWrap::GetProperties(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperties();
	VtkInformationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationWrap *w = new VtkInformationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectionNodeWrap::GetQueryString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQueryString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectionNodeWrap::GetSelectionData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkDataSetAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionData();
	VtkDataSetAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetAttributesWrap *w = new VtkDataSetAttributesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectionNodeWrap::GetSelectionList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkAbstractArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionList();
	VtkAbstractArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectionNodeWrap::HIERARCHICAL_INDEX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HIERARCHICAL_INDEX();
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

void VtkSelectionNodeWrap::HIERARCHICAL_LEVEL(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HIERARCHICAL_LEVEL();
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

void VtkSelectionNodeWrap::INDEXED_VERTICES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->INDEXED_VERTICES();
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

void VtkSelectionNodeWrap::INVERSE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->INVERSE();
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

void VtkSelectionNodeWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkSelectionNodeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
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

void VtkSelectionNodeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkSelectionNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSelectionNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSelectionNodeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionNodeWrap *w = new VtkSelectionNodeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectionNodeWrap::PIXEL_COUNT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PIXEL_COUNT();
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

void VtkSelectionNodeWrap::PROCESS_ID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PROCESS_ID();
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

void VtkSelectionNodeWrap::PROP(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationObjectBaseKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PROP();
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

void VtkSelectionNodeWrap::PROP_ID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PROP_ID();
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

void VtkSelectionNodeWrap::SOURCE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationObjectBaseKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SOURCE();
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

void VtkSelectionNodeWrap::SOURCE_ID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SOURCE_ID();
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

void VtkSelectionNodeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSelectionNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSelectionNodeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSelectionNodeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectionNodeWrap *w = new VtkSelectionNodeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::SetContentType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetContentType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFieldType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::SetQueryString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQueryString(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::SetSelectionData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetAttributesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetAttributesWrap *a0 = ObjectWrap::Unwrap<VtkDataSetAttributesWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionData(
			(vtkDataSetAttributes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::SetSelectionList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionList(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkSelectionNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::SubtractSelectionList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SubtractSelectionList(
			(vtkSelectionNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionNodeWrap::UnionSelectionList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionNodeWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info.Holder());
	vtkSelectionNode *native = (vtkSelectionNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionNodeWrap *a0 = ObjectWrap::Unwrap<VtkSelectionNodeWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UnionSelectionList(
			(vtkSelectionNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

