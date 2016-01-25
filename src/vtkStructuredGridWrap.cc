/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointSetWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStructuredGridWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredGridWrap::ptpl;

VtkStructuredGridWrap::VtkStructuredGridWrap()
{ }

VtkStructuredGridWrap::VtkStructuredGridWrap(vtkSmartPointer<vtkStructuredGrid> _native)
{ native = _native; }

VtkStructuredGridWrap::~VtkStructuredGridWrap()
{ }

void VtkStructuredGridWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointSetWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointSetWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkStructuredGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkStructuredGrid").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StructuredGrid").ToLocalChecked(),tpl->GetFunction());
}

void VtkStructuredGridWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetCellVisibilityArray", GetCellVisibilityArray);
	Nan::SetPrototypeMethod(tpl, "getCellVisibilityArray", GetCellVisibilityArray);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataDimension", GetDataDimension);
	Nan::SetPrototypeMethod(tpl, "getDataDimension", GetDataDimension);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetExtentType", GetExtentType);
	Nan::SetPrototypeMethod(tpl, "getExtentType", GetExtentType);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetPointVisibilityArray", GetPointVisibilityArray);
	Nan::SetPrototypeMethod(tpl, "getPointVisibilityArray", GetPointVisibilityArray);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellVisibilityArray", SetCellVisibilityArray);
	Nan::SetPrototypeMethod(tpl, "setCellVisibilityArray", SetCellVisibilityArray);

	Nan::SetPrototypeMethod(tpl, "SetDimensions", SetDimensions);
	Nan::SetPrototypeMethod(tpl, "setDimensions", SetDimensions);

	Nan::SetPrototypeMethod(tpl, "SetExtent", SetExtent);
	Nan::SetPrototypeMethod(tpl, "setExtent", SetExtent);

	Nan::SetPrototypeMethod(tpl, "SetPointVisibilityArray", SetPointVisibilityArray);
	Nan::SetPrototypeMethod(tpl, "setPointVisibilityArray", SetPointVisibilityArray);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

}

void VtkStructuredGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGrid> native = vtkSmartPointer<vtkStructuredGrid>::New();
		VtkStructuredGridWrap* obj = new VtkStructuredGridWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStructuredGridWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

void VtkStructuredGridWrap::GetCellVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	vtkUnsignedCharArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellVisibilityArray();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnsignedCharArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredGridWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkStructuredGrid * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkStructuredGridWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkStructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkStructuredGridWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridWrap::GetDataDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridWrap::GetExtentType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtentType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridWrap::GetPointVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	vtkUnsignedCharArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointVisibilityArray();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnsignedCharArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkStructuredGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
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

void VtkStructuredGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredGridWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredGrid * r;
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
			Nan::New<v8::Function>(VtkStructuredGridWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridWrap::SetCellVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkUnsignedCharArrayWrap *a0 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellVisibilityArray(
			(vtkUnsignedCharArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridWrap::SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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
				native->SetDimensions(
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

void VtkStructuredGridWrap::SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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
							native->SetExtent(
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

void VtkStructuredGridWrap::SetPointVisibilityArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkUnsignedCharArrayWrap *a0 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointVisibilityArray(
			(vtkUnsignedCharArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridWrap>(info.Holder());
	vtkStructuredGrid *native = (vtkStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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

