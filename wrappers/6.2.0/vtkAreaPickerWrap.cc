/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractPropPickerWrap.h"
#include "vtkAreaPickerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkAbstractMapper3DWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkProp3DCollectionWrap.h"
#include "vtkPlanesWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAreaPickerWrap::ptpl;

VtkAreaPickerWrap::VtkAreaPickerWrap()
{ }

VtkAreaPickerWrap::VtkAreaPickerWrap(vtkSmartPointer<vtkAreaPicker> _native)
{ native = _native; }

VtkAreaPickerWrap::~VtkAreaPickerWrap()
{ }

void VtkAreaPickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAreaPicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AreaPicker").ToLocalChecked(), ConstructorGetter);
}

void VtkAreaPickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAreaPickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractPropPickerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractPropPickerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAreaPickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AreaPick", AreaPick);
	Nan::SetPrototypeMethod(tpl, "areaPick", AreaPick);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipPoints", GetClipPoints);
	Nan::SetPrototypeMethod(tpl, "getClipPoints", GetClipPoints);

	Nan::SetPrototypeMethod(tpl, "GetDataSet", GetDataSet);
	Nan::SetPrototypeMethod(tpl, "getDataSet", GetDataSet);

	Nan::SetPrototypeMethod(tpl, "GetFrustum", GetFrustum);
	Nan::SetPrototypeMethod(tpl, "getFrustum", GetFrustum);

	Nan::SetPrototypeMethod(tpl, "GetMapper", GetMapper);
	Nan::SetPrototypeMethod(tpl, "getMapper", GetMapper);

	Nan::SetPrototypeMethod(tpl, "GetProp3Ds", GetProp3Ds);
	Nan::SetPrototypeMethod(tpl, "getProp3Ds", GetProp3Ds);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pick", Pick);
	Nan::SetPrototypeMethod(tpl, "pick", Pick);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPickCoords", SetPickCoords);
	Nan::SetPrototypeMethod(tpl, "setPickCoords", SetPickCoords);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

	ptpl.Reset( tpl );
}

void VtkAreaPickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAreaPicker> native = vtkSmartPointer<vtkAreaPicker>::New();
		VtkAreaPickerWrap* obj = new VtkAreaPickerWrap(native);
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

void VtkAreaPickerWrap::AreaPick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[4]))
					{
						VtkRendererWrap *a4 = ObjectWrap::Unwrap<VtkRendererWrap>(info[4]->ToObject());
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->AreaPick(
							info[0]->NumberValue(),
							info[1]->NumberValue(),
							info[2]->NumberValue(),
							info[3]->NumberValue(),
							(vtkRenderer *) a4->native.GetPointer()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaPickerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAreaPickerWrap::GetClipPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipPoints();
		VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaPickerWrap::GetDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSet();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaPickerWrap::GetFrustum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	vtkPlanes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrustum();
		VtkPlanesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlanesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlanesWrap *w = new VtkPlanesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaPickerWrap::GetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	vtkAbstractMapper3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapper();
		VtkAbstractMapper3DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractMapper3DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractMapper3DWrap *w = new VtkAbstractMapper3DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaPickerWrap::GetProp3Ds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	vtkProp3DCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProp3Ds();
		VtkProp3DCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProp3DCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProp3DCollectionWrap *w = new VtkProp3DCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaPickerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
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

void VtkAreaPickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	vtkAreaPicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAreaPickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAreaPickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAreaPickerWrap *w = new VtkAreaPickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaPickerWrap::Pick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[3]))
				{
					VtkRendererWrap *a3 = ObjectWrap::Unwrap<VtkRendererWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->Pick(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						(vtkRenderer *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Pick();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAreaPickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAreaPicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAreaPickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAreaPickerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAreaPickerWrap *w = new VtkAreaPickerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaPickerWrap::SetPickCoords(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetPickCoords(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaPickerWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaPickerWrap *wrapper = ObjectWrap::Unwrap<VtkAreaPickerWrap>(info.Holder());
	vtkAreaPicker *native = (vtkAreaPicker *)wrapper->native.GetPointer();
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

