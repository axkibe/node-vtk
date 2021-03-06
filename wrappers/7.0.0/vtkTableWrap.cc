/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataObjectWrap.h"
#include "vtkTableWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetAttributesWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "vtkFieldDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTableWrap::ptpl;

VtkTableWrap::VtkTableWrap()
{ }

VtkTableWrap::VtkTableWrap(vtkSmartPointer<vtkTable> _native)
{ native = _native; }

VtkTableWrap::~VtkTableWrap()
{ }

void VtkTableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTable").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Table").ToLocalChecked(), ConstructorGetter);
}

void VtkTableWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTableWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddColumn", AddColumn);
	Nan::SetPrototypeMethod(tpl, "addColumn", AddColumn);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "Dump", Dump);
	Nan::SetPrototypeMethod(tpl, "dump", Dump);

	Nan::SetPrototypeMethod(tpl, "GetActualMemorySize", GetActualMemorySize);
	Nan::SetPrototypeMethod(tpl, "getActualMemorySize", GetActualMemorySize);

	Nan::SetPrototypeMethod(tpl, "GetAttributesAsFieldData", GetAttributesAsFieldData);
	Nan::SetPrototypeMethod(tpl, "getAttributesAsFieldData", GetAttributesAsFieldData);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColumnByName", GetColumnByName);
	Nan::SetPrototypeMethod(tpl, "getColumnByName", GetColumnByName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetRowData", GetRowData);
	Nan::SetPrototypeMethod(tpl, "getRowData", GetRowData);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveColumnByName", RemoveColumnByName);
	Nan::SetPrototypeMethod(tpl, "removeColumnByName", RemoveColumnByName);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRowData", SetRowData);
	Nan::SetPrototypeMethod(tpl, "setRowData", SetRowData);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

#ifdef VTK_NODE_PLUS_VTKTABLEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTABLEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTable> native = vtkSmartPointer<vtkTable>::New();
		VtkTableWrap* obj = new VtkTableWrap(native);
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

void VtkTableWrap::AddColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddColumn(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::Dump(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Dump(
				info[0]->Uint32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActualMemorySize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableWrap::GetAttributesAsFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkFieldData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAttributesAsFieldData(
			info[0]->Int32Value()
		);
		VtkFieldDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkFieldDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFieldDataWrap *w = new VtkFieldDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableWrap::GetColumnByName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkAbstractArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetColumnByName(
			*a0
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkTable * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			VtkTableWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkTableWrap *w = new VtkTableWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkTable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		VtkTableWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableWrap *w = new VtkTableWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableWrap::GetRowData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	vtkDataSetAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRowData();
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

void VtkTableWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkTableWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
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

void VtkTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableWrap::RemoveColumnByName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveColumnByName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTableWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableWrap *w = new VtkTableWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::SetRowData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetAttributesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetAttributesWrap *a0 = ObjectWrap::Unwrap<VtkDataSetAttributesWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRowData(
			(vtkDataSetAttributes *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableWrap *wrapper = ObjectWrap::Unwrap<VtkTableWrap>(info.Holder());
	vtkTable *native = (vtkTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

