/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContextItemWrap.h"
#include "vtkHeatmapItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHeatmapItemWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHeatmapItemWrap::ptpl;

VtkHeatmapItemWrap::VtkHeatmapItemWrap()
{ }

VtkHeatmapItemWrap::VtkHeatmapItemWrap(vtkSmartPointer<vtkHeatmapItem> _native)
{ native = _native; }

VtkHeatmapItemWrap::~VtkHeatmapItemWrap()
{ }

void VtkHeatmapItemWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkHeatmapItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkHeatmapItem").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("HeatmapItem").ToLocalChecked(),tpl->GetFunction());
}

void VtkHeatmapItemWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetCellHeight", GetCellHeight);
	Nan::SetPrototypeMethod(tpl, "getCellHeight", GetCellHeight);

	Nan::SetPrototypeMethod(tpl, "GetCellWidth", GetCellWidth);
	Nan::SetPrototypeMethod(tpl, "getCellWidth", GetCellWidth);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetTable", GetTable);
	Nan::SetPrototypeMethod(tpl, "getTable", GetTable);

	Nan::SetPrototypeMethod(tpl, "GetTextAngleForOrientation", GetTextAngleForOrientation);
	Nan::SetPrototypeMethod(tpl, "getTextAngleForOrientation", GetTextAngleForOrientation);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellHeight", SetCellHeight);
	Nan::SetPrototypeMethod(tpl, "setCellHeight", SetCellHeight);

	Nan::SetPrototypeMethod(tpl, "SetCellWidth", SetCellWidth);
	Nan::SetPrototypeMethod(tpl, "setCellWidth", SetCellWidth);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetTable", SetTable);
	Nan::SetPrototypeMethod(tpl, "setTable", SetTable);

}

void VtkHeatmapItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHeatmapItem> native = vtkSmartPointer<vtkHeatmapItem>::New();
		VtkHeatmapItemWrap* obj = new VtkHeatmapItemWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHeatmapItemWrap::GetCellHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHeatmapItemWrap::GetCellWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHeatmapItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHeatmapItemWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHeatmapItemWrap::GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTable();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTableWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHeatmapItemWrap::GetTextAngleForOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTextAngleForOrientation(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
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

void VtkHeatmapItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	vtkHeatmapItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHeatmapItemWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHeatmapItemWrap *w = new VtkHeatmapItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHeatmapItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHeatmapItem * r;
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
			Nan::New<v8::Function>(VtkHeatmapItemWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHeatmapItemWrap *w = new VtkHeatmapItemWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetCellHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetCellWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHeatmapItemWrap::SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHeatmapItemWrap *wrapper = ObjectWrap::Unwrap<VtkHeatmapItemWrap>(info.Holder());
	vtkHeatmapItem *native = (vtkHeatmapItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTableWrap *a0 = ObjectWrap::Unwrap<VtkTableWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTable(
			(vtkTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

