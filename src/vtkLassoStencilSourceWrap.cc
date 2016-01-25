/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageStencilSourceWrap.h"
#include "vtkLassoStencilSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLassoStencilSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLassoStencilSourceWrap::ptpl;

VtkLassoStencilSourceWrap::VtkLassoStencilSourceWrap()
{ }

VtkLassoStencilSourceWrap::VtkLassoStencilSourceWrap(vtkSmartPointer<vtkLassoStencilSource> _native)
{ native = _native; }

VtkLassoStencilSourceWrap::~VtkLassoStencilSourceWrap()
{ }

void VtkLassoStencilSourceWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageStencilSourceWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageStencilSourceWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkLassoStencilSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkLassoStencilSource").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("LassoStencilSource").ToLocalChecked(),tpl->GetFunction());
}

void VtkLassoStencilSourceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "GetShape", GetShape);
	Nan::SetPrototypeMethod(tpl, "getShape", GetShape);

	Nan::SetPrototypeMethod(tpl, "GetShapeAsString", GetShapeAsString);
	Nan::SetPrototypeMethod(tpl, "getShapeAsString", GetShapeAsString);

	Nan::SetPrototypeMethod(tpl, "GetShapeMaxValue", GetShapeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShapeMaxValue", GetShapeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShapeMinValue", GetShapeMinValue);
	Nan::SetPrototypeMethod(tpl, "getShapeMinValue", GetShapeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSliceOrientation", GetSliceOrientation);
	Nan::SetPrototypeMethod(tpl, "getSliceOrientation", GetSliceOrientation);

	Nan::SetPrototypeMethod(tpl, "GetSliceOrientationMaxValue", GetSliceOrientationMaxValue);
	Nan::SetPrototypeMethod(tpl, "getSliceOrientationMaxValue", GetSliceOrientationMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetSliceOrientationMinValue", GetSliceOrientationMinValue);
	Nan::SetPrototypeMethod(tpl, "getSliceOrientationMinValue", GetSliceOrientationMinValue);

	Nan::SetPrototypeMethod(tpl, "GetSlicePoints", GetSlicePoints);
	Nan::SetPrototypeMethod(tpl, "getSlicePoints", GetSlicePoints);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllSlicePoints", RemoveAllSlicePoints);
	Nan::SetPrototypeMethod(tpl, "removeAllSlicePoints", RemoveAllSlicePoints);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPoints", SetPoints);
	Nan::SetPrototypeMethod(tpl, "setPoints", SetPoints);

	Nan::SetPrototypeMethod(tpl, "SetShape", SetShape);
	Nan::SetPrototypeMethod(tpl, "setShape", SetShape);

	Nan::SetPrototypeMethod(tpl, "SetShapeToPolygon", SetShapeToPolygon);
	Nan::SetPrototypeMethod(tpl, "setShapeToPolygon", SetShapeToPolygon);

	Nan::SetPrototypeMethod(tpl, "SetShapeToSpline", SetShapeToSpline);
	Nan::SetPrototypeMethod(tpl, "setShapeToSpline", SetShapeToSpline);

	Nan::SetPrototypeMethod(tpl, "SetSliceOrientation", SetSliceOrientation);
	Nan::SetPrototypeMethod(tpl, "setSliceOrientation", SetSliceOrientation);

	Nan::SetPrototypeMethod(tpl, "SetSlicePoints", SetSlicePoints);
	Nan::SetPrototypeMethod(tpl, "setSlicePoints", SetSlicePoints);

}

void VtkLassoStencilSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLassoStencilSource> native = vtkSmartPointer<vtkLassoStencilSource>::New();
		VtkLassoStencilSourceWrap* obj = new VtkLassoStencilSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLassoStencilSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLassoStencilSourceWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLassoStencilSourceWrap::GetShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShape();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLassoStencilSourceWrap::GetShapeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShapeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLassoStencilSourceWrap::GetShapeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShapeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLassoStencilSourceWrap::GetShapeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShapeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLassoStencilSourceWrap::GetSliceOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceOrientation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLassoStencilSourceWrap::GetSliceOrientationMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceOrientationMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLassoStencilSourceWrap::GetSliceOrientationMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSliceOrientationMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLassoStencilSourceWrap::GetSlicePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetSlicePoints(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkPointsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointsWrap *w = new VtkPointsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLassoStencilSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
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

void VtkLassoStencilSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	vtkLassoStencilSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLassoStencilSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLassoStencilSourceWrap *w = new VtkLassoStencilSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLassoStencilSourceWrap::RemoveAllSlicePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllSlicePoints();
}

void VtkLassoStencilSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLassoStencilSource * r;
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
			Nan::New<v8::Function>(VtkLassoStencilSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLassoStencilSourceWrap *w = new VtkLassoStencilSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLassoStencilSourceWrap::SetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPoints(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLassoStencilSourceWrap::SetShape(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShape(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLassoStencilSourceWrap::SetShapeToPolygon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShapeToPolygon();
}

void VtkLassoStencilSourceWrap::SetShapeToSpline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetShapeToSpline();
}

void VtkLassoStencilSourceWrap::SetSliceOrientation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSliceOrientation(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLassoStencilSourceWrap::SetSlicePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLassoStencilSourceWrap *wrapper = ObjectWrap::Unwrap<VtkLassoStencilSourceWrap>(info.Holder());
	vtkLassoStencilSource *native = (vtkLassoStencilSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetSlicePoints(
				info[0]->Int32Value(),
				(vtkPoints *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
