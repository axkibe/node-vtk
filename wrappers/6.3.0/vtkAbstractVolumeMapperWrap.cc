/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractMapper3DWrap.h"
#include "vtkAbstractVolumeMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractVolumeMapperWrap::ptpl;

VtkAbstractVolumeMapperWrap::VtkAbstractVolumeMapperWrap()
{ }

VtkAbstractVolumeMapperWrap::VtkAbstractVolumeMapperWrap(vtkSmartPointer<vtkAbstractVolumeMapper> _native)
{ native = _native; }

VtkAbstractVolumeMapperWrap::~VtkAbstractVolumeMapperWrap()
{ }

void VtkAbstractVolumeMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractVolumeMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractVolumeMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractVolumeMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractVolumeMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractMapper3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractMapper3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractVolumeMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetArrayAccessMode", GetArrayAccessMode);
	Nan::SetPrototypeMethod(tpl, "getArrayAccessMode", GetArrayAccessMode);

	Nan::SetPrototypeMethod(tpl, "GetArrayId", GetArrayId);
	Nan::SetPrototypeMethod(tpl, "getArrayId", GetArrayId);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectInput", GetDataObjectInput);
	Nan::SetPrototypeMethod(tpl, "getDataObjectInput", GetDataObjectInput);

	Nan::SetPrototypeMethod(tpl, "GetDataSetInput", GetDataSetInput);
	Nan::SetPrototypeMethod(tpl, "getDataSetInput", GetDataSetInput);

	Nan::SetPrototypeMethod(tpl, "GetScalarMode", GetScalarMode);
	Nan::SetPrototypeMethod(tpl, "getScalarMode", GetScalarMode);

	Nan::SetPrototypeMethod(tpl, "GetScalarModeAsString", GetScalarModeAsString);
	Nan::SetPrototypeMethod(tpl, "getScalarModeAsString", GetScalarModeAsString);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SelectScalarArray", SelectScalarArray);
	Nan::SetPrototypeMethod(tpl, "selectScalarArray", SelectScalarArray);

	Nan::SetPrototypeMethod(tpl, "SetScalarMode", SetScalarMode);
	Nan::SetPrototypeMethod(tpl, "setScalarMode", SetScalarMode);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToDefault", SetScalarModeToDefault);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToDefault", SetScalarModeToDefault);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToUseCellData", SetScalarModeToUseCellData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToUseCellData", SetScalarModeToUseCellData);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToUseCellFieldData", SetScalarModeToUseCellFieldData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToUseCellFieldData", SetScalarModeToUseCellFieldData);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToUsePointData", SetScalarModeToUsePointData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToUsePointData", SetScalarModeToUsePointData);

	Nan::SetPrototypeMethod(tpl, "SetScalarModeToUsePointFieldData", SetScalarModeToUsePointFieldData);
	Nan::SetPrototypeMethod(tpl, "setScalarModeToUsePointFieldData", SetScalarModeToUsePointFieldData);

	ptpl.Reset( tpl );
}

void VtkAbstractVolumeMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkAbstractVolumeMapperWrap::GetArrayAccessMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayAccessMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractVolumeMapperWrap::GetArrayId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractVolumeMapperWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractVolumeMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractVolumeMapperWrap::GetDataObjectInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectInput();
		VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractVolumeMapperWrap::GetDataSetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataSetInput();
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

void VtkAbstractVolumeMapperWrap::GetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractVolumeMapperWrap::GetScalarModeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarModeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractVolumeMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
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

void VtkAbstractVolumeMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	vtkAbstractVolumeMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAbstractVolumeMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractVolumeMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractVolumeMapperWrap *w = new VtkAbstractVolumeMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractVolumeMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractVolumeMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkVolumeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkVolume *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractVolumeMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAbstractVolumeMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAbstractVolumeMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractVolumeMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractVolumeMapperWrap *w = new VtkAbstractVolumeMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractVolumeMapperWrap::SelectScalarArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SelectScalarArray(
			*a0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SelectScalarArray(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractVolumeMapperWrap::SetScalarMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractVolumeMapperWrap::SetScalarModeToDefault(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToDefault();
}

void VtkAbstractVolumeMapperWrap::SetScalarModeToUseCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToUseCellData();
}

void VtkAbstractVolumeMapperWrap::SetScalarModeToUseCellFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToUseCellFieldData();
}

void VtkAbstractVolumeMapperWrap::SetScalarModeToUsePointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToUsePointData();
}

void VtkAbstractVolumeMapperWrap::SetScalarModeToUsePointFieldData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractVolumeMapperWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info.Holder());
	vtkAbstractVolumeMapper *native = (vtkAbstractVolumeMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetScalarModeToUsePointFieldData();
}

