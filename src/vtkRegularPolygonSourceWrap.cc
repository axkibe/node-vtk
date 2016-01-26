/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkRegularPolygonSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRegularPolygonSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkRegularPolygonSourceWrap::ptpl;

VtkRegularPolygonSourceWrap::VtkRegularPolygonSourceWrap()
{ }

VtkRegularPolygonSourceWrap::VtkRegularPolygonSourceWrap(vtkSmartPointer<vtkRegularPolygonSource> _native)
{ native = _native; }

VtkRegularPolygonSourceWrap::~VtkRegularPolygonSourceWrap()
{ }

void VtkRegularPolygonSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRegularPolygonSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RegularPolygonSource").ToLocalChecked(), ConstructorGetter);
}

void VtkRegularPolygonSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRegularPolygonSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRegularPolygonSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GeneratePolygonOff", GeneratePolygonOff);
	Nan::SetPrototypeMethod(tpl, "generatePolygonOff", GeneratePolygonOff);

	Nan::SetPrototypeMethod(tpl, "GeneratePolygonOn", GeneratePolygonOn);
	Nan::SetPrototypeMethod(tpl, "generatePolygonOn", GeneratePolygonOn);

	Nan::SetPrototypeMethod(tpl, "GeneratePolylineOff", GeneratePolylineOff);
	Nan::SetPrototypeMethod(tpl, "generatePolylineOff", GeneratePolylineOff);

	Nan::SetPrototypeMethod(tpl, "GeneratePolylineOn", GeneratePolylineOn);
	Nan::SetPrototypeMethod(tpl, "generatePolylineOn", GeneratePolylineOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGeneratePolygon", GetGeneratePolygon);
	Nan::SetPrototypeMethod(tpl, "getGeneratePolygon", GetGeneratePolygon);

	Nan::SetPrototypeMethod(tpl, "GetGeneratePolyline", GetGeneratePolyline);
	Nan::SetPrototypeMethod(tpl, "getGeneratePolyline", GetGeneratePolyline);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSides", GetNumberOfSides);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSides", GetNumberOfSides);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSidesMaxValue", GetNumberOfSidesMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSidesMaxValue", GetNumberOfSidesMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSidesMinValue", GetNumberOfSidesMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSidesMinValue", GetNumberOfSidesMinValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetGeneratePolygon", SetGeneratePolygon);
	Nan::SetPrototypeMethod(tpl, "setGeneratePolygon", SetGeneratePolygon);

	Nan::SetPrototypeMethod(tpl, "SetGeneratePolyline", SetGeneratePolyline);
	Nan::SetPrototypeMethod(tpl, "setGeneratePolyline", SetGeneratePolyline);

	Nan::SetPrototypeMethod(tpl, "SetNormal", SetNormal);
	Nan::SetPrototypeMethod(tpl, "setNormal", SetNormal);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSides", SetNumberOfSides);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSides", SetNumberOfSides);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkRegularPolygonSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRegularPolygonSource> native = vtkSmartPointer<vtkRegularPolygonSource>::New();
		VtkRegularPolygonSourceWrap* obj = new VtkRegularPolygonSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRegularPolygonSourceWrap::GeneratePolygonOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePolygonOff();
}

void VtkRegularPolygonSourceWrap::GeneratePolygonOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePolygonOn();
}

void VtkRegularPolygonSourceWrap::GeneratePolylineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePolylineOff();
}

void VtkRegularPolygonSourceWrap::GeneratePolylineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GeneratePolylineOn();
}

void VtkRegularPolygonSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRegularPolygonSourceWrap::GetGeneratePolygon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeneratePolygon();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRegularPolygonSourceWrap::GetGeneratePolyline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeneratePolyline();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRegularPolygonSourceWrap::GetNumberOfSides(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSides();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRegularPolygonSourceWrap::GetNumberOfSidesMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSidesMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRegularPolygonSourceWrap::GetNumberOfSidesMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSidesMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRegularPolygonSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRegularPolygonSourceWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRegularPolygonSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
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

void VtkRegularPolygonSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	vtkRegularPolygonSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRegularPolygonSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRegularPolygonSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRegularPolygonSourceWrap *w = new VtkRegularPolygonSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRegularPolygonSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRegularPolygonSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRegularPolygonSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkRegularPolygonSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRegularPolygonSourceWrap *w = new VtkRegularPolygonSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRegularPolygonSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
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
				native->SetCenter(
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

void VtkRegularPolygonSourceWrap::SetGeneratePolygon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeneratePolygon(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRegularPolygonSourceWrap::SetGeneratePolyline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeneratePolyline(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRegularPolygonSourceWrap::SetNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
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
				native->SetNormal(
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

void VtkRegularPolygonSourceWrap::SetNumberOfSides(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSides(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRegularPolygonSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRegularPolygonSourceWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRegularPolygonSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRegularPolygonSourceWrap>(info.Holder());
	vtkRegularPolygonSource *native = (vtkRegularPolygonSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

