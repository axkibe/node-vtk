/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkPickingManagerWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkRenderWindowInteractorWrap.h"
#include "vtkAbstractPickerWrap.h"
#include "vtkAssemblyPathWrap.h"
#include "vtkAbstractPropPickerWrap.h"
#include "vtkRendererWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPickingManagerWrap::ptpl;

VtkPickingManagerWrap::VtkPickingManagerWrap()
{ }

VtkPickingManagerWrap::VtkPickingManagerWrap(vtkSmartPointer<vtkPickingManager> _native)
{ native = _native; }

VtkPickingManagerWrap::~VtkPickingManagerWrap()
{ }

void VtkPickingManagerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPickingManager").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PickingManager").ToLocalChecked(), ConstructorGetter);
}

void VtkPickingManagerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPickingManagerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPickingManagerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddPicker", AddPicker);
	Nan::SetPrototypeMethod(tpl, "addPicker", AddPicker);

	Nan::SetPrototypeMethod(tpl, "EnabledOff", EnabledOff);
	Nan::SetPrototypeMethod(tpl, "enabledOff", EnabledOff);

	Nan::SetPrototypeMethod(tpl, "EnabledOn", EnabledOn);
	Nan::SetPrototypeMethod(tpl, "enabledOn", EnabledOn);

	Nan::SetPrototypeMethod(tpl, "GetAssemblyPath", GetAssemblyPath);
	Nan::SetPrototypeMethod(tpl, "getAssemblyPath", GetAssemblyPath);

	Nan::SetPrototypeMethod(tpl, "GetEnabled", GetEnabled);
	Nan::SetPrototypeMethod(tpl, "getEnabled", GetEnabled);

	Nan::SetPrototypeMethod(tpl, "GetInteractor", GetInteractor);
	Nan::SetPrototypeMethod(tpl, "getInteractor", GetInteractor);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfObjectsLinked", GetNumberOfObjectsLinked);
	Nan::SetPrototypeMethod(tpl, "getNumberOfObjectsLinked", GetNumberOfObjectsLinked);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPickers", GetNumberOfPickers);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPickers", GetNumberOfPickers);

	Nan::SetPrototypeMethod(tpl, "GetOptimizeOnInteractorEvents", GetOptimizeOnInteractorEvents);
	Nan::SetPrototypeMethod(tpl, "getOptimizeOnInteractorEvents", GetOptimizeOnInteractorEvents);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Pick", Pick);
	Nan::SetPrototypeMethod(tpl, "pick", Pick);

	Nan::SetPrototypeMethod(tpl, "RemoveObject", RemoveObject);
	Nan::SetPrototypeMethod(tpl, "removeObject", RemoveObject);

	Nan::SetPrototypeMethod(tpl, "RemovePicker", RemovePicker);
	Nan::SetPrototypeMethod(tpl, "removePicker", RemovePicker);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnabled", SetEnabled);
	Nan::SetPrototypeMethod(tpl, "setEnabled", SetEnabled);

	Nan::SetPrototypeMethod(tpl, "SetInteractor", SetInteractor);
	Nan::SetPrototypeMethod(tpl, "setInteractor", SetInteractor);

	Nan::SetPrototypeMethod(tpl, "SetOptimizeOnInteractorEvents", SetOptimizeOnInteractorEvents);
	Nan::SetPrototypeMethod(tpl, "setOptimizeOnInteractorEvents", SetOptimizeOnInteractorEvents);

#ifdef VTK_NODE_PLUS_VTKPICKINGMANAGERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPICKINGMANAGERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPickingManagerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPickingManager> native = vtkSmartPointer<vtkPickingManager>::New();
		VtkPickingManagerWrap* obj = new VtkPickingManagerWrap(native);
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

void VtkPickingManagerWrap::AddPicker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPickerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPickerWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkObjectWrap *a1 = ObjectWrap::Unwrap<VtkObjectWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddPicker(
				(vtkAbstractPicker *) a0->native.GetPointer(),
				(vtkObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::EnabledOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnabledOff();
}

void VtkPickingManagerWrap::EnabledOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnabledOn();
}

void VtkPickingManagerWrap::GetAssemblyPath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkAbstractPropPickerWrap::ptpl))->HasInstance(info[3]))
				{
					VtkAbstractPropPickerWrap *a3 = ObjectWrap::Unwrap<VtkAbstractPropPickerWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[4]))
					{
						VtkRendererWrap *a4 = ObjectWrap::Unwrap<VtkRendererWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[5]))
						{
							VtkObjectWrap *a5 = ObjectWrap::Unwrap<VtkObjectWrap>(info[5]->ToObject());
							vtkAssemblyPath * r;
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							r = native->GetAssemblyPath(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								(vtkAbstractPropPicker *) a3->native.GetPointer(),
								(vtkRenderer *) a4->native.GetPointer(),
								(vtkObject *) a5->native.GetPointer()
							);
							VtkAssemblyPathWrap::InitPtpl();
							v8::Local<v8::Value> argv[1] =
								{ Nan::New(vtkNodeJsNoWrap) };
							v8::Local<v8::Function> cons =
								Nan::New<v8::FunctionTemplate>(VtkAssemblyPathWrap::ptpl)->GetFunction();
							v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
							VtkAssemblyPathWrap *w = new VtkAssemblyPathWrap();
							w->native = r;
							w->Wrap(wo);
							info.GetReturnValue().Set(wo);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::GetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnabled();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPickingManagerWrap::GetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	vtkRenderWindowInteractor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInteractor();
	VtkRenderWindowInteractorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRenderWindowInteractorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderWindowInteractorWrap *w = new VtkRenderWindowInteractorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPickingManagerWrap::GetNumberOfObjectsLinked(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPickerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPickerWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfObjectsLinked(
			(vtkAbstractPicker *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::GetNumberOfPickers(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPickers();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPickingManagerWrap::GetOptimizeOnInteractorEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOptimizeOnInteractorEvents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPickingManagerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	vtkPickingManager * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPickingManagerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPickingManagerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPickingManagerWrap *w = new VtkPickingManagerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPickingManagerWrap::Pick(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPickerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPickerWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkObjectWrap *a1 = ObjectWrap::Unwrap<VtkObjectWrap>(info[1]->ToObject());
			bool r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Pick(
				(vtkAbstractPicker *) a0->native.GetPointer(),
				(vtkObject *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Pick(
			(vtkAbstractPicker *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Pick(
			(vtkObject *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::RemoveObject(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveObject(
			(vtkObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::RemovePicker(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPickerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPickerWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPickerWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkObjectWrap *a1 = ObjectWrap::Unwrap<VtkObjectWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RemovePicker(
				(vtkAbstractPicker *) a0->native.GetPointer(),
				(vtkObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPickingManager * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPickingManagerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPickingManagerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPickingManagerWrap *w = new VtkPickingManagerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::SetEnabled(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnabled(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::SetInteractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRenderWindowInteractorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRenderWindowInteractorWrap *a0 = ObjectWrap::Unwrap<VtkRenderWindowInteractorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInteractor(
			(vtkRenderWindowInteractor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPickingManagerWrap::SetOptimizeOnInteractorEvents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPickingManagerWrap *wrapper = ObjectWrap::Unwrap<VtkPickingManagerWrap>(info.Holder());
	vtkPickingManager *native = (vtkPickingManager *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOptimizeOnInteractorEvents(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

