/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPlotWrap.h"
#include "vtkPlotPieWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkColorSeriesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPlotPieWrap::ptpl;

VtkPlotPieWrap::VtkPlotPieWrap()
{ }

VtkPlotPieWrap::VtkPlotPieWrap(vtkSmartPointer<vtkPlotPie> _native)
{ native = _native; }

VtkPlotPieWrap::~VtkPlotPieWrap()
{ }

void VtkPlotPieWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPlotPie").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PlotPie").ToLocalChecked(), ConstructorGetter);
}

void VtkPlotPieWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPlotPieWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPlotPieWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColorSeries", GetColorSeries);
	Nan::SetPrototypeMethod(tpl, "getColorSeries", GetColorSeries);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorSeries", SetColorSeries);
	Nan::SetPrototypeMethod(tpl, "setColorSeries", SetColorSeries);

	Nan::SetPrototypeMethod(tpl, "SetDimensions", SetDimensions);
	Nan::SetPrototypeMethod(tpl, "setDimensions", SetDimensions);

	ptpl.Reset( tpl );
}

void VtkPlotPieWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPlotPie> native = vtkSmartPointer<vtkPlotPie>::New();
		VtkPlotPieWrap* obj = new VtkPlotPieWrap(native);
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

void VtkPlotPieWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPieWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPieWrap>(info.Holder());
	vtkPlotPie *native = (vtkPlotPie *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPlotPieWrap::GetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPieWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPieWrap>(info.Holder());
	vtkPlotPie *native = (vtkPlotPie *)wrapper->native.GetPointer();
	vtkColorSeries * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorSeries();
		VtkColorSeriesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkColorSeriesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkColorSeriesWrap *w = new VtkColorSeriesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotPieWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPieWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPieWrap>(info.Holder());
	vtkPlotPie *native = (vtkPlotPie *)wrapper->native.GetPointer();
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

void VtkPlotPieWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPieWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPieWrap>(info.Holder());
	vtkPlotPie *native = (vtkPlotPie *)wrapper->native.GetPointer();
	vtkPlotPie * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPlotPieWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlotPieWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlotPieWrap *w = new VtkPlotPieWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPlotPieWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPieWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPieWrap>(info.Holder());
	vtkPlotPie *native = (vtkPlotPie *)wrapper->native.GetPointer();
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

void VtkPlotPieWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPieWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPieWrap>(info.Holder());
	vtkPlotPie *native = (vtkPlotPie *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPlotPie * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPlotPieWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlotPieWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlotPieWrap *w = new VtkPlotPieWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotPieWrap::SetColorSeries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPieWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPieWrap>(info.Holder());
	vtkPlotPie *native = (vtkPlotPie *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkColorSeriesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkColorSeriesWrap *a0 = ObjectWrap::Unwrap<VtkColorSeriesWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorSeries(
			(vtkColorSeries *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPlotPieWrap::SetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPlotPieWrap *wrapper = ObjectWrap::Unwrap<VtkPlotPieWrap>(info.Holder());
	vtkPlotPie *native = (vtkPlotPie *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetDimensions(
						info[0]->Int32Value(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

