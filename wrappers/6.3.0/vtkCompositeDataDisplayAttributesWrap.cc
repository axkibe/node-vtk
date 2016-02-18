/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkCompositeDataDisplayAttributesWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCompositeDataDisplayAttributesWrap::ptpl;

VtkCompositeDataDisplayAttributesWrap::VtkCompositeDataDisplayAttributesWrap()
{ }

VtkCompositeDataDisplayAttributesWrap::VtkCompositeDataDisplayAttributesWrap(vtkSmartPointer<vtkCompositeDataDisplayAttributes> _native)
{ native = _native; }

VtkCompositeDataDisplayAttributesWrap::~VtkCompositeDataDisplayAttributesWrap()
{ }

void VtkCompositeDataDisplayAttributesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCompositeDataDisplayAttributes").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CompositeDataDisplayAttributes").ToLocalChecked(), ConstructorGetter);
}

void VtkCompositeDataDisplayAttributesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCompositeDataDisplayAttributesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCompositeDataDisplayAttributesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBlockColor", GetBlockColor);
	Nan::SetPrototypeMethod(tpl, "getBlockColor", GetBlockColor);

	Nan::SetPrototypeMethod(tpl, "GetBlockOpacity", GetBlockOpacity);
	Nan::SetPrototypeMethod(tpl, "getBlockOpacity", GetBlockOpacity);

	Nan::SetPrototypeMethod(tpl, "GetBlockVisibility", GetBlockVisibility);
	Nan::SetPrototypeMethod(tpl, "getBlockVisibility", GetBlockVisibility);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "HasBlockColor", HasBlockColor);
	Nan::SetPrototypeMethod(tpl, "hasBlockColor", HasBlockColor);

	Nan::SetPrototypeMethod(tpl, "HasBlockColors", HasBlockColors);
	Nan::SetPrototypeMethod(tpl, "hasBlockColors", HasBlockColors);

	Nan::SetPrototypeMethod(tpl, "HasBlockOpacities", HasBlockOpacities);
	Nan::SetPrototypeMethod(tpl, "hasBlockOpacities", HasBlockOpacities);

	Nan::SetPrototypeMethod(tpl, "HasBlockOpacity", HasBlockOpacity);
	Nan::SetPrototypeMethod(tpl, "hasBlockOpacity", HasBlockOpacity);

	Nan::SetPrototypeMethod(tpl, "HasBlockVisibilities", HasBlockVisibilities);
	Nan::SetPrototypeMethod(tpl, "hasBlockVisibilities", HasBlockVisibilities);

	Nan::SetPrototypeMethod(tpl, "HasBlockVisibility", HasBlockVisibility);
	Nan::SetPrototypeMethod(tpl, "hasBlockVisibility", HasBlockVisibility);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockColor", RemoveBlockColor);
	Nan::SetPrototypeMethod(tpl, "removeBlockColor", RemoveBlockColor);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockColors", RemoveBlockColors);
	Nan::SetPrototypeMethod(tpl, "removeBlockColors", RemoveBlockColors);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockOpacities", RemoveBlockOpacities);
	Nan::SetPrototypeMethod(tpl, "removeBlockOpacities", RemoveBlockOpacities);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockOpacity", RemoveBlockOpacity);
	Nan::SetPrototypeMethod(tpl, "removeBlockOpacity", RemoveBlockOpacity);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockVisibilites", RemoveBlockVisibilites);
	Nan::SetPrototypeMethod(tpl, "removeBlockVisibilites", RemoveBlockVisibilites);

	Nan::SetPrototypeMethod(tpl, "RemoveBlockVisibility", RemoveBlockVisibility);
	Nan::SetPrototypeMethod(tpl, "removeBlockVisibility", RemoveBlockVisibility);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBlockColor", SetBlockColor);
	Nan::SetPrototypeMethod(tpl, "setBlockColor", SetBlockColor);

	Nan::SetPrototypeMethod(tpl, "SetBlockOpacity", SetBlockOpacity);
	Nan::SetPrototypeMethod(tpl, "setBlockOpacity", SetBlockOpacity);

	Nan::SetPrototypeMethod(tpl, "SetBlockVisibility", SetBlockVisibility);
	Nan::SetPrototypeMethod(tpl, "setBlockVisibility", SetBlockVisibility);

#ifdef VTK_NODE_PLUS_VTKCOMPOSITEDATADISPLAYATTRIBUTESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCOMPOSITEDATADISPLAYATTRIBUTESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCompositeDataDisplayAttributesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCompositeDataDisplayAttributes> native = vtkSmartPointer<vtkCompositeDataDisplayAttributes>::New();
		VtkCompositeDataDisplayAttributesWrap* obj = new VtkCompositeDataDisplayAttributesWrap(native);
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

void VtkCompositeDataDisplayAttributesWrap::GetBlockColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetBlockColor(
				info[0]->Uint32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetBlockColor(
				info[0]->Uint32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::GetBlockOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetBlockOpacity(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::GetBlockVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetBlockVisibility(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasBlockColor(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasBlockColors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasBlockOpacities();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasBlockOpacity(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockVisibilities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasBlockVisibilities();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCompositeDataDisplayAttributesWrap::HasBlockVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasBlockVisibility(
			info[0]->Uint32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
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

void VtkCompositeDataDisplayAttributesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	vtkCompositeDataDisplayAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCompositeDataDisplayAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCompositeDataDisplayAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCompositeDataDisplayAttributesWrap *w = new VtkCompositeDataDisplayAttributesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveBlockColor(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockColors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockColors();
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockOpacities(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockOpacities();
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveBlockOpacity(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockVisibilites(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveBlockVisibilites();
}

void VtkCompositeDataDisplayAttributesWrap::RemoveBlockVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveBlockVisibility(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCompositeDataDisplayAttributes * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCompositeDataDisplayAttributesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCompositeDataDisplayAttributesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCompositeDataDisplayAttributesWrap *w = new VtkCompositeDataDisplayAttributesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::SetBlockColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBlockColor(
				info[0]->Uint32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBlockColor(
				info[0]->Uint32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::SetBlockOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBlockOpacity(
				info[0]->Uint32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCompositeDataDisplayAttributesWrap::SetBlockVisibility(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCompositeDataDisplayAttributesWrap *wrapper = ObjectWrap::Unwrap<VtkCompositeDataDisplayAttributesWrap>(info.Holder());
	vtkCompositeDataDisplayAttributes *native = (vtkCompositeDataDisplayAttributes *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
		if(info.Length() > 1 && info[1]->IsBoolean())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetBlockVisibility(
				info[0]->Uint32Value(),
				info[1]->BooleanValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

