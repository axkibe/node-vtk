/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContextItemWrap.h"
#include "vtkDendrogramItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkTreeWrap.h"
#include "vtkContext2DWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDendrogramItemWrap::constructor;

VtkDendrogramItemWrap::VtkDendrogramItemWrap()
{ }

VtkDendrogramItemWrap::VtkDendrogramItemWrap(vtkSmartPointer<vtkDendrogramItem> _native)
{ native = _native; }

VtkDendrogramItemWrap::~VtkDendrogramItemWrap()
{ }

void VtkDendrogramItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkDendrogramItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAbstractContextItemWrap::InitTpl(tpl);
	VtkContextItemWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkDendrogramItem").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("DendrogramItem").ToLocalChecked(),tpl->GetFunction());
}

void VtkDendrogramItemWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "ComputeLabelWidth", ComputeLabelWidth);
	Nan::SetPrototypeMethod(tpl, "computeLabelWidth", ComputeLabelWidth);

	Nan::SetPrototypeMethod(tpl, "DisplayNumberOfCollapsedLeafNodesOff", DisplayNumberOfCollapsedLeafNodesOff);
	Nan::SetPrototypeMethod(tpl, "displayNumberOfCollapsedLeafNodesOff", DisplayNumberOfCollapsedLeafNodesOff);

	Nan::SetPrototypeMethod(tpl, "DisplayNumberOfCollapsedLeafNodesOn", DisplayNumberOfCollapsedLeafNodesOn);
	Nan::SetPrototypeMethod(tpl, "displayNumberOfCollapsedLeafNodesOn", DisplayNumberOfCollapsedLeafNodesOn);

	Nan::SetPrototypeMethod(tpl, "DrawLabelsOff", DrawLabelsOff);
	Nan::SetPrototypeMethod(tpl, "drawLabelsOff", DrawLabelsOff);

	Nan::SetPrototypeMethod(tpl, "DrawLabelsOn", DrawLabelsOn);
	Nan::SetPrototypeMethod(tpl, "drawLabelsOn", DrawLabelsOn);

	Nan::SetPrototypeMethod(tpl, "ExtendLeafNodesOff", ExtendLeafNodesOff);
	Nan::SetPrototypeMethod(tpl, "extendLeafNodesOff", ExtendLeafNodesOff);

	Nan::SetPrototypeMethod(tpl, "ExtendLeafNodesOn", ExtendLeafNodesOn);
	Nan::SetPrototypeMethod(tpl, "extendLeafNodesOn", ExtendLeafNodesOn);

	Nan::SetPrototypeMethod(tpl, "GetAngleForOrientation", GetAngleForOrientation);
	Nan::SetPrototypeMethod(tpl, "getAngleForOrientation", GetAngleForOrientation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLeafSpacing", GetLeafSpacing);
	Nan::SetPrototypeMethod(tpl, "getLeafSpacing", GetLeafSpacing);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetPrunedTree", GetPrunedTree);
	Nan::SetPrototypeMethod(tpl, "getPrunedTree", GetPrunedTree);

	Nan::SetPrototypeMethod(tpl, "GetTextAngleForOrientation", GetTextAngleForOrientation);
	Nan::SetPrototypeMethod(tpl, "getTextAngleForOrientation", GetTextAngleForOrientation);

	Nan::SetPrototypeMethod(tpl, "GetTree", GetTree);
	Nan::SetPrototypeMethod(tpl, "getTree", GetTree);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrepareToPaint", PrepareToPaint);
	Nan::SetPrototypeMethod(tpl, "prepareToPaint", PrepareToPaint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorArray", SetColorArray);
	Nan::SetPrototypeMethod(tpl, "setColorArray", SetColorArray);

	Nan::SetPrototypeMethod(tpl, "SetLeafSpacing", SetLeafSpacing);
	Nan::SetPrototypeMethod(tpl, "setLeafSpacing", SetLeafSpacing);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetTree", SetTree);
	Nan::SetPrototypeMethod(tpl, "setTree", SetTree);

}

void VtkDendrogramItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDendrogramItem> native = vtkSmartPointer<vtkDendrogramItem>::New();
		VtkDendrogramItemWrap* obj = new VtkDendrogramItemWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDendrogramItemWrap::ComputeLabelWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ComputeLabelWidth(
			(vtkContext2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::DisplayNumberOfCollapsedLeafNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayNumberOfCollapsedLeafNodesOff();
}

void VtkDendrogramItemWrap::DisplayNumberOfCollapsedLeafNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisplayNumberOfCollapsedLeafNodesOn();
}

void VtkDendrogramItemWrap::DrawLabelsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DrawLabelsOff();
}

void VtkDendrogramItemWrap::DrawLabelsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DrawLabelsOn();
}

void VtkDendrogramItemWrap::ExtendLeafNodesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtendLeafNodesOff();
}

void VtkDendrogramItemWrap::ExtendLeafNodesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtendLeafNodesOn();
}

void VtkDendrogramItemWrap::GetAngleForOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAngleForOrientation(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDendrogramItemWrap::GetLeafSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafSpacing();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDendrogramItemWrap::GetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDendrogramItemWrap::GetPrunedTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	vtkTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPrunedTree();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDendrogramItemWrap::GetTextAngleForOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
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

void VtkDendrogramItemWrap::GetTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	vtkTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTree();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTreeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDendrogramItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
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

void VtkDendrogramItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	vtkDendrogramItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDendrogramItemWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDendrogramItemWrap *w = new VtkDendrogramItemWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDendrogramItemWrap::PrepareToPaint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PrepareToPaint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDendrogramItem * r;
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
			Nan::New<v8::Function>(VtkDendrogramItemWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDendrogramItemWrap *w = new VtkDendrogramItemWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::SetColorArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::SetLeafSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLeafSpacing(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::SetOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
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

void VtkDendrogramItemWrap::SetTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTree(
			(vtkTree *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

