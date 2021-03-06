/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkContextItemWrap.h"
#include "vtkDendrogramItemWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkTreeWrap.h"
#include "vtkContext2DWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDendrogramItemWrap::ptpl;

VtkDendrogramItemWrap::VtkDendrogramItemWrap()
{ }

VtkDendrogramItemWrap::VtkDendrogramItemWrap(vtkSmartPointer<vtkDendrogramItem> _native)
{ native = _native; }

VtkDendrogramItemWrap::~VtkDendrogramItemWrap()
{ }

void VtkDendrogramItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDendrogramItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DendrogramItem").ToLocalChecked(), ConstructorGetter);
}

void VtkDendrogramItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDendrogramItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContextItemWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContextItemWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDendrogramItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CollapseToNumberOfLeafNodes", CollapseToNumberOfLeafNodes);
	Nan::SetPrototypeMethod(tpl, "collapseToNumberOfLeafNodes", CollapseToNumberOfLeafNodes);

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

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetDisplayNumberOfCollapsedLeafNodes", GetDisplayNumberOfCollapsedLeafNodes);
	Nan::SetPrototypeMethod(tpl, "getDisplayNumberOfCollapsedLeafNodes", GetDisplayNumberOfCollapsedLeafNodes);

	Nan::SetPrototypeMethod(tpl, "GetDrawLabels", GetDrawLabels);
	Nan::SetPrototypeMethod(tpl, "getDrawLabels", GetDrawLabels);

	Nan::SetPrototypeMethod(tpl, "GetExtendLeafNodes", GetExtendLeafNodes);
	Nan::SetPrototypeMethod(tpl, "getExtendLeafNodes", GetExtendLeafNodes);

	Nan::SetPrototypeMethod(tpl, "GetLabelWidth", GetLabelWidth);
	Nan::SetPrototypeMethod(tpl, "getLabelWidth", GetLabelWidth);

	Nan::SetPrototypeMethod(tpl, "GetLeafSpacing", GetLeafSpacing);
	Nan::SetPrototypeMethod(tpl, "getLeafSpacing", GetLeafSpacing);

	Nan::SetPrototypeMethod(tpl, "GetLineWidth", GetLineWidth);
	Nan::SetPrototypeMethod(tpl, "getLineWidth", GetLineWidth);

	Nan::SetPrototypeMethod(tpl, "GetOrientation", GetOrientation);
	Nan::SetPrototypeMethod(tpl, "getOrientation", GetOrientation);

	Nan::SetPrototypeMethod(tpl, "GetPosition", GetPosition);
	Nan::SetPrototypeMethod(tpl, "getPosition", GetPosition);

	Nan::SetPrototypeMethod(tpl, "GetPrunedTree", GetPrunedTree);
	Nan::SetPrototypeMethod(tpl, "getPrunedTree", GetPrunedTree);

	Nan::SetPrototypeMethod(tpl, "GetTextAngleForOrientation", GetTextAngleForOrientation);
	Nan::SetPrototypeMethod(tpl, "getTextAngleForOrientation", GetTextAngleForOrientation);

	Nan::SetPrototypeMethod(tpl, "GetTree", GetTree);
	Nan::SetPrototypeMethod(tpl, "getTree", GetTree);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "PrepareToPaint", PrepareToPaint);
	Nan::SetPrototypeMethod(tpl, "prepareToPaint", PrepareToPaint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorArray", SetColorArray);
	Nan::SetPrototypeMethod(tpl, "setColorArray", SetColorArray);

	Nan::SetPrototypeMethod(tpl, "SetDisplayNumberOfCollapsedLeafNodes", SetDisplayNumberOfCollapsedLeafNodes);
	Nan::SetPrototypeMethod(tpl, "setDisplayNumberOfCollapsedLeafNodes", SetDisplayNumberOfCollapsedLeafNodes);

	Nan::SetPrototypeMethod(tpl, "SetDrawLabels", SetDrawLabels);
	Nan::SetPrototypeMethod(tpl, "setDrawLabels", SetDrawLabels);

	Nan::SetPrototypeMethod(tpl, "SetExtendLeafNodes", SetExtendLeafNodes);
	Nan::SetPrototypeMethod(tpl, "setExtendLeafNodes", SetExtendLeafNodes);

	Nan::SetPrototypeMethod(tpl, "SetLeafSpacing", SetLeafSpacing);
	Nan::SetPrototypeMethod(tpl, "setLeafSpacing", SetLeafSpacing);

	Nan::SetPrototypeMethod(tpl, "SetLineWidth", SetLineWidth);
	Nan::SetPrototypeMethod(tpl, "setLineWidth", SetLineWidth);

	Nan::SetPrototypeMethod(tpl, "SetOrientation", SetOrientation);
	Nan::SetPrototypeMethod(tpl, "setOrientation", SetOrientation);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetTree", SetTree);
	Nan::SetPrototypeMethod(tpl, "setTree", SetTree);

#ifdef VTK_NODE_PLUS_VTKDENDROGRAMITEMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDENDROGRAMITEMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
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
		VtkDendrogramItemWrap* obj = new VtkDendrogramItemWrap(native);
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

void VtkDendrogramItemWrap::CollapseToNumberOfLeafNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CollapseToNumberOfLeafNodes(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::ComputeLabelWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
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

void VtkDendrogramItemWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::GetDisplayNumberOfCollapsedLeafNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplayNumberOfCollapsedLeafNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDendrogramItemWrap::GetDrawLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDrawLabels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDendrogramItemWrap::GetExtendLeafNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtendLeafNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDendrogramItemWrap::GetLabelWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLabelWidth();
	info.GetReturnValue().Set(Nan::New(r));
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

void VtkDendrogramItemWrap::GetLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineWidth();
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

void VtkDendrogramItemWrap::GetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	float const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPosition();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(float));
	Local<v8::Float32Array> at = v8::Float32Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(float));
	info.GetReturnValue().Set(at);
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
	VtkTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native = r;
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
	VtkTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
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
	VtkDendrogramItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDendrogramItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDendrogramItemWrap *w = new VtkDendrogramItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDendrogramItemWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::PrepareToPaint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
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
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDendrogramItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDendrogramItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDendrogramItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDendrogramItemWrap *w = new VtkDendrogramItemWrap();
		w->native = r;
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
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkDendrogramItemWrap::SetDisplayNumberOfCollapsedLeafNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDisplayNumberOfCollapsedLeafNodes(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::SetDrawLabels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDrawLabels(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::SetExtendLeafNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtendLeafNodes(
			info[0]->BooleanValue()
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

void VtkDendrogramItemWrap::SetLineWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		native->SetLineWidth(
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

void VtkDendrogramItemWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat32Array())
	{
		v8::Local<v8::Float32Array>a0(v8::Local<v8::Float32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPosition(
			(float *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		float b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPosition(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPosition(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDendrogramItemWrap::SetTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDendrogramItemWrap *wrapper = ObjectWrap::Unwrap<VtkDendrogramItemWrap>(info.Holder());
	vtkDendrogramItem *native = (vtkDendrogramItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTreeWrap::ptpl))->HasInstance(info[0]))
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

