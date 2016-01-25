/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContextItemWrap.h"
#include "vtkTanglegramItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTreeWrap.h"
#include "vtkTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTanglegramItemWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkTanglegramItemWrap::ptpl;

VtkTanglegramItemWrap::VtkTanglegramItemWrap()
{ }

VtkTanglegramItemWrap::VtkTanglegramItemWrap(vtkSmartPointer<vtkTanglegramItem> _native)
{ native = _native; }

VtkTanglegramItemWrap::~VtkTanglegramItemWrap()
{ }

void VtkTanglegramItemWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkTanglegramItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkTanglegramItem").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TanglegramItem").ToLocalChecked(),tpl->GetFunction());
}

void VtkTanglegramItemWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLabelSizeDifference", GetLabelSizeDifference);
	Nan::SetPrototypeMethod(tpl, "getLabelSizeDifference", GetLabelSizeDifference);

	Nan::SetPrototypeMethod(tpl, "GetMinimumVisibleFontSize", GetMinimumVisibleFontSize);
	Nan::SetPrototypeMethod(tpl, "getMinimumVisibleFontSize", GetMinimumVisibleFontSize);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetTable", GetTable);
	Nan::SetPrototypeMethod(tpl, "getTable", GetTable);

	Nan::SetPrototypeMethod(tpl, "GetTree1Label", GetTree1Label);
	Nan::SetPrototypeMethod(tpl, "getTree1Label", GetTree1Label);

	Nan::SetPrototypeMethod(tpl, "GetTree2Label", GetTree2Label);
	Nan::SetPrototypeMethod(tpl, "getTree2Label", GetTree2Label);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLabelSizeDifference", SetLabelSizeDifference);
	Nan::SetPrototypeMethod(tpl, "setLabelSizeDifference", SetLabelSizeDifference);

	Nan::SetPrototypeMethod(tpl, "SetMinimumVisibleFontSize", SetMinimumVisibleFontSize);
	Nan::SetPrototypeMethod(tpl, "setMinimumVisibleFontSize", SetMinimumVisibleFontSize);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetTable", SetTable);
	Nan::SetPrototypeMethod(tpl, "setTable", SetTable);

	Nan::SetPrototypeMethod(tpl, "SetTree1", SetTree1);
	Nan::SetPrototypeMethod(tpl, "setTree1", SetTree1);

	Nan::SetPrototypeMethod(tpl, "SetTree1Label", SetTree1Label);
	Nan::SetPrototypeMethod(tpl, "setTree1Label", SetTree1Label);

	Nan::SetPrototypeMethod(tpl, "SetTree2", SetTree2);
	Nan::SetPrototypeMethod(tpl, "setTree2", SetTree2);

	Nan::SetPrototypeMethod(tpl, "SetTree2Label", SetTree2Label);
	Nan::SetPrototypeMethod(tpl, "setTree2Label", SetTree2Label);

}

void VtkTanglegramItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTanglegramItem> native = vtkSmartPointer<vtkTanglegramItem>::New();
		VtkTanglegramItemWrap* obj = new VtkTanglegramItemWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTanglegramItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTanglegramItemWrap::GetLabelSizeDifference(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelSizeDifference();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTanglegramItemWrap::GetMinimumVisibleFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumVisibleFontSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTanglegramItemWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTanglegramItemWrap::GetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
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

void VtkTanglegramItemWrap::GetTree1Label(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTree1Label();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTanglegramItemWrap::GetTree2Label(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTree2Label();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTanglegramItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
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

void VtkTanglegramItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	vtkTanglegramItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTanglegramItemWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTanglegramItemWrap *w = new VtkTanglegramItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTanglegramItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTanglegramItem * r;
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
			Nan::New<v8::Function>(VtkTanglegramItemWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTanglegramItemWrap *w = new VtkTanglegramItemWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTanglegramItemWrap::SetLabelSizeDifference(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLabelSizeDifference(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTanglegramItemWrap::SetMinimumVisibleFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimumVisibleFontSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTanglegramItemWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
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

void VtkTanglegramItemWrap::SetTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
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

void VtkTanglegramItemWrap::SetTree1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTree1(
			(vtkTree *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTanglegramItemWrap::SetTree1Label(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTree1Label(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTanglegramItemWrap::SetTree2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTree2(
			(vtkTree *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTanglegramItemWrap::SetTree2Label(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTanglegramItemWrap *wrapper = ObjectWrap::Unwrap<VtkTanglegramItemWrap>(info.Holder());
	vtkTanglegramItem *native = (vtkTanglegramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTree2Label(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

