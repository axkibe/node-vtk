/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSelectionAlgorithmWrap.h"
#include "vtkSelectionSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkSelectionSourceWrap::constructor;

VtkSelectionSourceWrap::VtkSelectionSourceWrap()
{ }

VtkSelectionSourceWrap::VtkSelectionSourceWrap(vtkSmartPointer<vtkSelectionSource> _native)
{ native = _native; }

VtkSelectionSourceWrap::~VtkSelectionSourceWrap()
{ }

void VtkSelectionSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkSelectionSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkSelectionAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkSelectionSource").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("SelectionSource").ToLocalChecked(),tpl->GetFunction());
}

void VtkSelectionSourceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddLocation", AddLocation);
	Nan::SetPrototypeMethod(tpl, "addLocation", AddLocation);

	Nan::SetPrototypeMethod(tpl, "AddThreshold", AddThreshold);
	Nan::SetPrototypeMethod(tpl, "addThreshold", AddThreshold);

	Nan::SetPrototypeMethod(tpl, "GetArrayComponent", GetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "getArrayComponent", GetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCompositeIndex", GetCompositeIndex);
	Nan::SetPrototypeMethod(tpl, "getCompositeIndex", GetCompositeIndex);

	Nan::SetPrototypeMethod(tpl, "GetContainingCells", GetContainingCells);
	Nan::SetPrototypeMethod(tpl, "getContainingCells", GetContainingCells);

	Nan::SetPrototypeMethod(tpl, "GetContentType", GetContentType);
	Nan::SetPrototypeMethod(tpl, "getContentType", GetContentType);

	Nan::SetPrototypeMethod(tpl, "GetFieldType", GetFieldType);
	Nan::SetPrototypeMethod(tpl, "getFieldType", GetFieldType);

	Nan::SetPrototypeMethod(tpl, "GetHierarchicalIndex", GetHierarchicalIndex);
	Nan::SetPrototypeMethod(tpl, "getHierarchicalIndex", GetHierarchicalIndex);

	Nan::SetPrototypeMethod(tpl, "GetHierarchicalLevel", GetHierarchicalLevel);
	Nan::SetPrototypeMethod(tpl, "getHierarchicalLevel", GetHierarchicalLevel);

	Nan::SetPrototypeMethod(tpl, "GetInverse", GetInverse);
	Nan::SetPrototypeMethod(tpl, "getInverse", GetInverse);

	Nan::SetPrototypeMethod(tpl, "GetQueryString", GetQueryString);
	Nan::SetPrototypeMethod(tpl, "getQueryString", GetQueryString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllBlocks", RemoveAllBlocks);
	Nan::SetPrototypeMethod(tpl, "removeAllBlocks", RemoveAllBlocks);

	Nan::SetPrototypeMethod(tpl, "RemoveAllIDs", RemoveAllIDs);
	Nan::SetPrototypeMethod(tpl, "removeAllIDs", RemoveAllIDs);

	Nan::SetPrototypeMethod(tpl, "RemoveAllLocations", RemoveAllLocations);
	Nan::SetPrototypeMethod(tpl, "removeAllLocations", RemoveAllLocations);

	Nan::SetPrototypeMethod(tpl, "RemoveAllStringIDs", RemoveAllStringIDs);
	Nan::SetPrototypeMethod(tpl, "removeAllStringIDs", RemoveAllStringIDs);

	Nan::SetPrototypeMethod(tpl, "RemoveAllThresholds", RemoveAllThresholds);
	Nan::SetPrototypeMethod(tpl, "removeAllThresholds", RemoveAllThresholds);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayComponent", SetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "setArrayComponent", SetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "SetArrayName", SetArrayName);
	Nan::SetPrototypeMethod(tpl, "setArrayName", SetArrayName);

	Nan::SetPrototypeMethod(tpl, "SetCompositeIndex", SetCompositeIndex);
	Nan::SetPrototypeMethod(tpl, "setCompositeIndex", SetCompositeIndex);

	Nan::SetPrototypeMethod(tpl, "SetContainingCells", SetContainingCells);
	Nan::SetPrototypeMethod(tpl, "setContainingCells", SetContainingCells);

	Nan::SetPrototypeMethod(tpl, "SetContentType", SetContentType);
	Nan::SetPrototypeMethod(tpl, "setContentType", SetContentType);

	Nan::SetPrototypeMethod(tpl, "SetFieldType", SetFieldType);
	Nan::SetPrototypeMethod(tpl, "setFieldType", SetFieldType);

	Nan::SetPrototypeMethod(tpl, "SetHierarchicalIndex", SetHierarchicalIndex);
	Nan::SetPrototypeMethod(tpl, "setHierarchicalIndex", SetHierarchicalIndex);

	Nan::SetPrototypeMethod(tpl, "SetHierarchicalLevel", SetHierarchicalLevel);
	Nan::SetPrototypeMethod(tpl, "setHierarchicalLevel", SetHierarchicalLevel);

	Nan::SetPrototypeMethod(tpl, "SetInverse", SetInverse);
	Nan::SetPrototypeMethod(tpl, "setInverse", SetInverse);

	Nan::SetPrototypeMethod(tpl, "SetQueryString", SetQueryString);
	Nan::SetPrototypeMethod(tpl, "setQueryString", SetQueryString);

}

void VtkSelectionSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSelectionSource> native = vtkSmartPointer<vtkSelectionSource>::New();
		VtkSelectionSourceWrap* obj = new VtkSelectionSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkSelectionSourceWrap::AddLocation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->AddLocation(
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

void VtkSelectionSourceWrap::AddThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddThreshold(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionSourceWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectionSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectionSourceWrap::GetCompositeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCompositeIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionSourceWrap::GetContainingCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContainingCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionSourceWrap::GetContentType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetContentType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionSourceWrap::GetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionSourceWrap::GetHierarchicalIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHierarchicalIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionSourceWrap::GetHierarchicalLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHierarchicalLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionSourceWrap::GetInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInverse();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSelectionSourceWrap::GetQueryString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQueryString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSelectionSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkSelectionSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	vtkSelectionSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkSelectionSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSelectionSourceWrap *w = new VtkSelectionSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSelectionSourceWrap::RemoveAllBlocks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllBlocks();
}

void VtkSelectionSourceWrap::RemoveAllIDs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllIDs();
}

void VtkSelectionSourceWrap::RemoveAllLocations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllLocations();
}

void VtkSelectionSourceWrap::RemoveAllStringIDs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllStringIDs();
}

void VtkSelectionSourceWrap::RemoveAllThresholds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllThresholds();
}

void VtkSelectionSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSelectionSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkSelectionSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSelectionSourceWrap *w = new VtkSelectionSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::SetCompositeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCompositeIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::SetContainingCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetContainingCells(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::SetContentType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
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

void VtkSelectionSourceWrap::SetFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
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

void VtkSelectionSourceWrap::SetHierarchicalIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHierarchicalIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::SetHierarchicalLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHierarchicalLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::SetInverse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInverse(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSelectionSourceWrap::SetQueryString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSelectionSourceWrap *wrapper = ObjectWrap::Unwrap<VtkSelectionSourceWrap>(info.Holder());
	vtkSelectionSource *native = (vtkSelectionSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

