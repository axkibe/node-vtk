/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkConvexHull2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPointsWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkConvexHull2DWrap::ptpl;

VtkConvexHull2DWrap::VtkConvexHull2DWrap()
{ }

VtkConvexHull2DWrap::VtkConvexHull2DWrap(vtkSmartPointer<vtkConvexHull2D> _native)
{ native = _native; }

VtkConvexHull2DWrap::~VtkConvexHull2DWrap()
{ }

void VtkConvexHull2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkConvexHull2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ConvexHull2D").ToLocalChecked(), ConstructorGetter);
}

void VtkConvexHull2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkConvexHull2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkConvexHull2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CalculateBoundingRectangle", CalculateBoundingRectangle);
	Nan::SetPrototypeMethod(tpl, "calculateBoundingRectangle", CalculateBoundingRectangle);

	Nan::SetPrototypeMethod(tpl, "CalculateConvexHull", CalculateConvexHull);
	Nan::SetPrototypeMethod(tpl, "calculateConvexHull", CalculateConvexHull);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHullShape", GetHullShape);
	Nan::SetPrototypeMethod(tpl, "getHullShape", GetHullShape);

	Nan::SetPrototypeMethod(tpl, "GetHullShapeMaxValue", GetHullShapeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getHullShapeMaxValue", GetHullShapeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetHullShapeMinValue", GetHullShapeMinValue);
	Nan::SetPrototypeMethod(tpl, "getHullShapeMinValue", GetHullShapeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMTime", GetMTime);
	Nan::SetPrototypeMethod(tpl, "getMTime", GetMTime);

	Nan::SetPrototypeMethod(tpl, "GetMinHullSizeInDisplay", GetMinHullSizeInDisplay);
	Nan::SetPrototypeMethod(tpl, "getMinHullSizeInDisplay", GetMinHullSizeInDisplay);

	Nan::SetPrototypeMethod(tpl, "GetMinHullSizeInDisplayMaxValue", GetMinHullSizeInDisplayMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMinHullSizeInDisplayMaxValue", GetMinHullSizeInDisplayMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMinHullSizeInDisplayMinValue", GetMinHullSizeInDisplayMinValue);
	Nan::SetPrototypeMethod(tpl, "getMinHullSizeInDisplayMinValue", GetMinHullSizeInDisplayMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMinHullSizeInWorld", GetMinHullSizeInWorld);
	Nan::SetPrototypeMethod(tpl, "getMinHullSizeInWorld", GetMinHullSizeInWorld);

	Nan::SetPrototypeMethod(tpl, "GetMinHullSizeInWorldMaxValue", GetMinHullSizeInWorldMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMinHullSizeInWorldMaxValue", GetMinHullSizeInWorldMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMinHullSizeInWorldMinValue", GetMinHullSizeInWorldMinValue);
	Nan::SetPrototypeMethod(tpl, "getMinHullSizeInWorldMinValue", GetMinHullSizeInWorldMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutline", GetOutline);
	Nan::SetPrototypeMethod(tpl, "getOutline", GetOutline);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "GetScaleFactor", GetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "getScaleFactor", GetScaleFactor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OutlineOff", OutlineOff);
	Nan::SetPrototypeMethod(tpl, "outlineOff", OutlineOff);

	Nan::SetPrototypeMethod(tpl, "OutlineOn", OutlineOn);
	Nan::SetPrototypeMethod(tpl, "outlineOn", OutlineOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetHullShape", SetHullShape);
	Nan::SetPrototypeMethod(tpl, "setHullShape", SetHullShape);

	Nan::SetPrototypeMethod(tpl, "SetMinHullSizeInDisplay", SetMinHullSizeInDisplay);
	Nan::SetPrototypeMethod(tpl, "setMinHullSizeInDisplay", SetMinHullSizeInDisplay);

	Nan::SetPrototypeMethod(tpl, "SetMinHullSizeInWorld", SetMinHullSizeInWorld);
	Nan::SetPrototypeMethod(tpl, "setMinHullSizeInWorld", SetMinHullSizeInWorld);

	Nan::SetPrototypeMethod(tpl, "SetOutline", SetOutline);
	Nan::SetPrototypeMethod(tpl, "setOutline", SetOutline);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	Nan::SetPrototypeMethod(tpl, "SetScaleFactor", SetScaleFactor);
	Nan::SetPrototypeMethod(tpl, "setScaleFactor", SetScaleFactor);

#ifdef VTK_NODE_PLUS_VTKCONVEXHULL2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCONVEXHULL2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkConvexHull2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkConvexHull2D> native = vtkSmartPointer<vtkConvexHull2D>::New();
		VtkConvexHull2DWrap* obj = new VtkConvexHull2DWrap(native);
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

void VtkConvexHull2DWrap::CalculateBoundingRectangle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->CalculateBoundingRectangle(
					(vtkPoints *) a0->native.GetPointer(),
					(vtkPoints *) a1->native.GetPointer(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvexHull2DWrap::CalculateConvexHull(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->CalculateConvexHull(
					(vtkPoints *) a0->native.GetPointer(),
					(vtkPoints *) a1->native.GetPointer(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvexHull2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConvexHull2DWrap::GetHullShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHullShape();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetHullShapeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHullShapeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetHullShapeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHullShapeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetMinHullSizeInDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinHullSizeInDisplay();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetMinHullSizeInDisplayMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinHullSizeInDisplayMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetMinHullSizeInDisplayMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinHullSizeInDisplayMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetMinHullSizeInWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinHullSizeInWorld();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetMinHullSizeInWorldMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinHullSizeInWorldMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetMinHullSizeInWorldMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinHullSizeInWorldMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutline();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
	VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConvexHull2DWrap::GetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaleFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvexHull2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
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

void VtkConvexHull2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	vtkConvexHull2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkConvexHull2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkConvexHull2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConvexHull2DWrap *w = new VtkConvexHull2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConvexHull2DWrap::OutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOff();
}

void VtkConvexHull2DWrap::OutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OutlineOn();
}

void VtkConvexHull2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkConvexHull2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkConvexHull2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkConvexHull2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConvexHull2DWrap *w = new VtkConvexHull2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvexHull2DWrap::SetHullShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHullShape(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvexHull2DWrap::SetMinHullSizeInDisplay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinHullSizeInDisplay(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvexHull2DWrap::SetMinHullSizeInWorld(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinHullSizeInWorld(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvexHull2DWrap::SetOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutline(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvexHull2DWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvexHull2DWrap::SetScaleFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvexHull2DWrap *wrapper = ObjectWrap::Unwrap<VtkConvexHull2DWrap>(info.Holder());
	vtkConvexHull2D *native = (vtkConvexHull2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

